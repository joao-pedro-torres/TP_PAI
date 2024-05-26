#include "gui.h"
#include "ui_gui.h"
#include "csv_utils.cpp"
#include "opencv_utils.cpp"

#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <set>

/**
 * @brief gui concstructor implementation
*/
gui::gui(QWidget *parent) : QMainWindow(parent), ui(new Ui::gui) {
    ui->setupUi(this);

    loading_label = new QLabel();
    loading_label->setText("loading...");
    loading_label->setVisible(false);

    dataset_path = "/home/joaop/PUC/Curso_CC_6p/PAI/Trabalhos/dataset";
    status_dataset_label = new QLabel(this);
    if(dataset_path == "") status_dataset_label->setText("No loaded dataset");
    else status_dataset_label->setText(dataset_path);

    csv_path = "/home/joaop/PUC/Curso_CC_6p/PAI/Trabalhos/classifications.csv";
    status_csv_label = new QLabel(this);
    if(csv_path == "") status_csv_label->setText("No loaded csv");
    else status_csv_label->setText(csv_path);

    QSpacerItem *spacer = new QSpacerItem(
        40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum
    );

    // Create a layout to hold labels and spacer
    QHBoxLayout *statusLayout = new QHBoxLayout;
    statusLayout->addWidget(loading_label);
    statusLayout->addItem(spacer);
    statusLayout->addWidget(status_dataset_label);
    statusLayout->addItem(spacer);
    statusLayout->addWidget(status_csv_label);

    // Create a container widget for the layout
    QWidget *statusWidget = new QWidget(this);
    statusWidget->setLayout(statusLayout);

    // Set the widget as the status bar
    statusBar()->addWidget(statusWidget);

    // declare scenes where will be shown the loaded images
    OriginalImage = new QGraphicsScene(this);
    GrayscaleImage = new QGraphicsScene(this);

    // connect scroll bars between both scenes to synchronize its positions
    QObject::connect(
        ui->GrayscaleViewer->horizontalScrollBar(),
        &QScrollBar::valueChanged, this, [=](int value) {
            ui->OriginalViewer->horizontalScrollBar()->setValue(value);
        }
    );

    QObject::connect(
        ui->GrayscaleViewer->verticalScrollBar(),
        &QScrollBar::valueChanged, this, [=](int value) {
            ui->OriginalViewer->verticalScrollBar()->setValue(value);
        }
    );

    QObject::connect(
        ui->OriginalViewer->horizontalScrollBar(),
        &QScrollBar::valueChanged, this, [=](int value) {
            ui->GrayscaleViewer->horizontalScrollBar()->setValue(value);
        }
    );

    QObject::connect(
        ui->OriginalViewer->verticalScrollBar(),
        &QScrollBar::valueChanged, this, [=](int value) {
            ui->GrayscaleViewer->verticalScrollBar()->setValue(value);
        }
    );

    ui->TableHu_G->horizontalHeader()->setFixedHeight(20);
    ui->TableHu_H->horizontalHeader()->setFixedHeight(20);
    ui->TableHu_S->horizontalHeader()->setFixedHeight(20);
    ui->TableHu_V->horizontalHeader()->setFixedHeight(20);
    for(size_t i = 0; i < 7; i++) {
        ui->TableHu_G->setRowHeight(i, 7);
        ui->TableHu_H->setRowHeight(i, 7);
        ui->TableHu_S->setRowHeight(i, 7);
        ui->TableHu_V->setRowHeight(i, 7);
    }

    for(size_t i = 0; i < 3; i++) {
        ui->TableHaralick01->setRowHeight(i, 27);
        ui->TableHaralick02->setRowHeight(i, 27);
        ui->TableHaralick04->setRowHeight(i, 27);
        ui->TableHaralick08->setRowHeight(i, 27);
        ui->TableHaralick16->setRowHeight(i, 27);
        ui->TableHaralick32->setRowHeight(i, 27);
    }
}

gui::~gui() {
    delete ui;
    delete OriginalImage;
    delete GrayscaleImage;
}

void gui::viewImage() {
    // if a file was selected
    if(!selected_image.isEmpty()) {
        // generate image
        QPixmap img(selected_image);

        // set image in graphic view
        OriginalImage->addPixmap(img);
        ui->OriginalViewer->setScene(OriginalImage);
        ui->OriginalViewer->fitInView(
            OriginalImage->sceneRect(), Qt::KeepAspectRatio
        );

        // set converted to grayscale image to graphic view
        GrayscaleImage->addPixmap(cvt_image_grayscale(selected_image));
        ui->GrayscaleViewer->setScene(GrayscaleImage);
        ui->GrayscaleViewer->fitInView(
            GrayscaleImage->sceneRect(), Qt::KeepAspectRatio
        );

        ui->ViewerPath->setText(selected_image);
        selected_image_size = ui->GrayscaleViewer->height();
        ui->ViewerSize->setText(
            QString::number(selected_image_size)
            + " X " +
            QString::number(selected_image_size)
        );

        // get label size
        QSize size_label = ui->CoOcurrenceMatrix_01->size();

        // generate scaled image
        QPixmap scaled_img = img.scaled(
            size_label, Qt::KeepAspectRatio, Qt::SmoothTransformation
        );

        // set scaled image in label
        ui->CoOcurrenceMatrix_01->setPixmap(scaled_img);
        ui->CoOcurrenceMatrix_01->setAlignment(Qt::AlignCenter);

        // get label size
        QSize size_gray_histogram = ui->GrayscaleHistogramViewer->size();
        QSize size_hsv_histogram = ui->HsvHistogramViewer->size();

        // generate image
        QPixmap gray_histogram = genGrayscaleHistogram(
            selected_image, size_gray_histogram.width(),
            size_gray_histogram.height()
        );

        // generate scaled image
        QPixmap gray_scaled_histogram = gray_histogram.scaled(
            size_gray_histogram, Qt::KeepAspectRatio, Qt::SmoothTransformation
        );

        // set scaled image in label
        ui->GrayscaleHistogramViewer->setPixmap(gray_scaled_histogram);
        ui->GrayscaleHistogramViewer->setAlignment(Qt::AlignCenter);

        // generate image
        QPixmap hsv_histogram = genHSVHistogram(
            selected_image, size_hsv_histogram.width(),
            size_hsv_histogram.height()
        );

        // generate scaled image
        QPixmap hsv_scaled_histogram = hsv_histogram.scaled(
            size_hsv_histogram, Qt::KeepAspectRatio, Qt::SmoothTransformation
        );

        // set scaled image in label
        ui->HsvHistogramViewer->setPixmap(hsv_scaled_histogram);
        ui->HsvHistogramViewer->setAlignment(Qt::AlignCenter);

        // generate and show co-ocurrence matrices
        std::vector<int> distances({1, 2, 4, 8, 16, 32});
        std::vector<cv::Mat> matrices = genCoOccurrenceMatrices(
            selected_image, distances
        );

        std::vector<QLabel*> co_ocurrence_matrices({
            ui->CoOcurrenceMatrix_01, ui->CoOcurrenceMatrix_02,
            ui->CoOcurrenceMatrix_04, ui->CoOcurrenceMatrix_08,
            ui->CoOcurrenceMatrix_16, ui->CoOcurrenceMatrix_32
        });

        for(size_t i = 0; i < co_ocurrence_matrices.size(); i++) {
            co_ocurrence_matrices[i]->setPixmap(matToQPixmap(matrices[i]));
            co_ocurrence_matrices[i]->setAlignment(Qt::AlignCenter);
            co_ocurrence_matrices[i]->setScaledContents(Qt::KeepAspectRatio);
        }

        // calculate invariant hu moments
        std::vector<std::vector<double>> hu = calculateHuMomentsHSV(QImage(
            selected_image
        ));

        hu.push_back(calculateHuMoments(
            cvt_image_grayscale(selected_image).toImage()
        ));

        for(size_t i = 0; i < 7; i++) {
            ui->TableHu_G->setItem(i, 0, new QTableWidgetItem(
                QString::number(hu[3][i]))
            );
            ui->TableHu_H->setItem(i, 0, new QTableWidgetItem(
                QString::number(hu[0][i]))
            );
            ui->TableHu_S->setItem(i, 0, new QTableWidgetItem(
                QString::number(hu[1][i]))
            );
            ui->TableHu_V->setItem(i, 0, new QTableWidgetItem(
                QString::number(hu[2][i]))
            );
        }

        // calculate haralick descriptors
        ui->TableHaralick01->setItem(0, 0, new QTableWidgetItem(
           QString::number(calculateEntropy(matrices[0])))
        );
        ui->TableHaralick01->setItem(1, 0, new QTableWidgetItem(
           QString::number(calculateHomogeneity(matrices[0])))
        );
        ui->TableHaralick01->setItem(2, 0, new QTableWidgetItem(
           QString::number(calculateContrast(matrices[0])))
        );

        ui->TableHaralick02->setItem(0, 0, new QTableWidgetItem(
           QString::number(calculateEntropy(matrices[1])))
        );
        ui->TableHaralick02->setItem(1, 0, new QTableWidgetItem(
           QString::number(calculateHomogeneity(matrices[1])))
        );
        ui->TableHaralick02->setItem(2, 0, new QTableWidgetItem(
           QString::number(calculateContrast(matrices[1])))
        );

        ui->TableHaralick04->setItem(0, 0, new QTableWidgetItem(
           QString::number(calculateEntropy(matrices[2])))
        );
        ui->TableHaralick04->setItem(1, 0, new QTableWidgetItem(
           QString::number(calculateHomogeneity(matrices[2])))
        );
        ui->TableHaralick04->setItem(2, 0, new QTableWidgetItem(
           QString::number(calculateContrast(matrices[2])))
        );

        ui->TableHaralick08->setItem(0, 0, new QTableWidgetItem(
           QString::number(calculateEntropy(matrices[3])))
        );
        ui->TableHaralick08->setItem(1, 0, new QTableWidgetItem(
           QString::number(calculateHomogeneity(matrices[3])))
        );
        ui->TableHaralick08->setItem(2, 0, new QTableWidgetItem(
           QString::number(calculateContrast(matrices[3])))
        );

        ui->TableHaralick16->setItem(0, 0, new QTableWidgetItem(
           QString::number(calculateEntropy(matrices[4])))
        );
        ui->TableHaralick16->setItem(1, 0, new QTableWidgetItem(
           QString::number(calculateHomogeneity(matrices[4])))
        );
        ui->TableHaralick16->setItem(2, 0, new QTableWidgetItem(
           QString::number(calculateContrast(matrices[4])))
        );

        ui->TableHaralick32->setItem(0, 0, new QTableWidgetItem(
           QString::number(calculateEntropy(matrices[5])))
        );
        ui->TableHaralick32->setItem(1, 0, new QTableWidgetItem(
           QString::number(calculateHomogeneity(matrices[5])))
        );
        ui->TableHaralick32->setItem(2, 0, new QTableWidgetItem(
           QString::number(calculateContrast(matrices[5])))
        );
    }
}

// on clicking OpenImage button (in menu File)
void gui::on_OpenImage_triggered() {
    on_CloseImage_triggered();

    // open a FileDialog to select a png or a jpg file
    QString img_path = QFileDialog::getOpenFileName(
        this, "Open File", "", tr("PNG (*.png);;JPG (*.jpg)")
    );

    selected_image = img_path;
    viewImage();
}

// on clicking CloseImage button (in menu File)
void gui::on_CloseImage_triggered() {
    OriginalImage->clear();
    GrayscaleImage->clear();
    ui->CoOcurrenceMatrix_01->clear();
    ui->GrayscaleHistogramViewer->clear();
    ui->HsvHistogramViewer->clear();
}

// on clicking ZoomIn button
void gui::on_ZoomInButton_clicked() {
    if(!selected_image.isEmpty()) {
        // increase image scale in 5%
        ui->OriginalViewer->scale(1.05, 1.05);
        ui->GrayscaleViewer->scale(1.05, 1.05);
        selected_image_size *= 1.05;

        ui->ViewerPath->setText(selected_image);
        ui->ViewerSize->setText(
            QString::number(selected_image_size)
            + " X " +
            QString::number(selected_image_size)
        );
    }
}

// on clicking ZoomOut button
void gui::on_ZoomOutButton_clicked() {
    if(!selected_image.isEmpty()) {
        // reduce image scale in 5%
        ui->OriginalViewer->scale(0.95, 0.95);
        ui->GrayscaleViewer->scale(0.95, 0.95);
        selected_image_size *= 0.95;

        ui->ViewerPath->setText(selected_image);
        ui->ViewerSize->setText(
            QString::number(selected_image_size)
            + " X " +
            QString::number(selected_image_size)
        );
    }
}

// on clicking ImportCSV button (in menu File)
void gui::on_ImportCSV_triggered() {
    QString path = QFileDialog::getOpenFileName(
        this, "Import CSV", "", tr("CSV (*.csv)")
        );

    if(!path.isEmpty() && path != "") {
        csv_path = path;
        status_csv_label->setText("Loaded CSV file: " + csv_path);
    }
}

// on clicking CloseCSV button (in menu File)
void gui::on_CloseCSV_triggered() {
    csv_path = "";
    status_csv_label->setText("No loaded csv");
}

// on clicking ImportDataset button (in menu File)
void gui::on_ImportDataset_triggered() {
    QString path = QFileDialog::getExistingDirectory(
        this, "Import dataset", "", QFileDialog::ShowDirsOnly
    );

    if(!path.isEmpty() && path != "") {
        dataset_path = path;
        status_dataset_label->setText("Loaded dataset: " + dataset_path);
    }
}

// on clicking CloseDataset button (in menu File)
void gui::on_CloseDataset_triggered() {
    dataset_path = "";
    status_dataset_label->setText("No loaded dataset");
}

// on clicking Start button (in main frame)
void gui::on_StartButton_clicked() {
    int ready = 1;
    images.clear();
    ui->ImageFolders->clear();
    loading_label->setVisible(true);
    selected_image.clear();

    // get data and validate csv
    if(!dataset_path.isEmpty()
        && dataset_path != "" && !csv_path.isEmpty() && csv_path != "") {

        // get workspace where to store the images
        workspace = "/home/joaop/PUC/Curso_CC_6p/PAI/Trabalhos/out";
        // workspace = QFileDialog::getExistingDirectory(
        //     this, "Store processed images", "", QFileDialog::ShowDirsOnly
        // );

        try {
            // validate csv file
            ready = CSV::validateCSV(
                csv_path.toStdString(), dataset_path.toStdString()
            );
        } catch(std::runtime_error err) {
            std::cout << "start -> runtime error" << std::endl;
            std::cout << err.what() << std::endl;
            QMessageBox::warning(
                this, "Fail on getting data!", err.what()
                );
        } catch(std::invalid_argument err) {
            std::cout << "start -> invalid argument" << std::endl;
            std::cout << err.what() << std::endl;
            QMessageBox::critical(
                this, "Fail on getting data!", err.what()
                );
        } catch(std::out_of_range err) {
            std::cout << "start -> out of range" << std::endl;
            std::cout << err.what() << std::endl;
            QMessageBox::critical(
                this, "Fail on getting data!", err.what()
                );
        } catch(...) {
            std::cout << "deu biziu" << std::endl;
            QMessageBox::critical(
                this, "Unexpected error has happened!", ""
                );
        }

        if(ready == 0) {
            // get images
            CSV dataset(csv_path, ',');

            std::set<std::string> list_of_image_paths;
            std::set<int> list_of_image_ids;
            std::vector<std::string> image_ids = dataset.getColumn(0);
            std::vector<std::string> image_paths = dataset.getColumn(1);
            std::set<int> ids;
            std::set<std::string> paths;
            std::vector<int> image_cells;
            std::vector<int> image_rows;

            // get set of image ids and paths and count
            // the number of cells for each image
            int n_rows = dataset.getnRow();
            for(int i = 0; i < n_rows; i++) {
                try {
                    auto result = ids.insert(stoi(image_ids[i]));
                    if(!result.second) {
                        // count one more cell
                        image_cells.back()++;
                    } else {
                        // insert another image
                        paths.insert(image_paths[i]);
                        image_cells.push_back(1);
                        image_rows.push_back(i);
                    }
                } catch (std::invalid_argument err) {
                    std::cout << err.what() << std::endl;
                }
            }

            std::vector<int> set_ids(ids.begin(), ids.end());
            std::vector<std::string> set_paths(paths.begin(), paths.end());

            image_ids.clear(); image_paths.clear();
            ids.clear(); paths.clear();

            int n_paths = set_paths.size();
            int n_ids = set_ids.size();

            if(n_ids != n_paths) QMessageBox::critical(
                this, "Amount of ids and amount of image paths don't match",
                "It may have inconsistent relation between images and ids"
            );

            // get images cells and information
            int n_images = (n_ids <= n_paths) ? n_ids : n_paths;
            for(int i = 0; i < n_images; i++) {
                CSV_Image img;
                img.id = set_ids[i];
                img.path = set_paths[i];
                img.n_cells = image_cells[i];

                images.push_back(img);
                for(int j = 0; j < images[i].n_cells; j++) {
                    Cell_Nucleus cell;

                    // get image cells information
                    cell.id =
                        stoi(dataset.getDataCell(j + image_rows[i], 3));
                    cell.b_system =
                        dataset.getDataCell(j + image_rows[i], 4);
                    cell.x_coord =
                        stoi(dataset.getDataCell(j + image_rows[i], 5));
                    cell.y_coord =
                        stoi(dataset.getDataCell(j + image_rows[i], 6));

                    images[i].list_of_nucleus.push_back(cell);
                }
            }

            // get current date to create the folder to store the images
            auto now = std::chrono::system_clock::now();
            std::time_t currentTime =
                std::chrono::system_clock::to_time_t(now);
            std::tm* localTime = std::localtime(&currentTime);
            std::ostringstream oss;
            oss << std::put_time(localTime, "%d-%m-%Y");
            std::string todayDate = oss.str();
            todayDirectory = workspace.toStdString() + "/" + todayDate;
            std::vector<std::string> failed_images;

            // process gotten images cells's cores
            // future = QtConcurrent::run([this, &failed_images, todayDirectory]() {
            std::vector<std::string> labels;
            failed_images = extractNucleus(
                dataset_path.toStdString(), todayDirectory,
                images, folder_stream
            );

            if(!failed_images.empty()) {
                QMessageBox::warning(
                    this, "Failed to load files.",
                    QString::number(failed_images.size())
                        + " images were not found"
                    );
            }

            // assign combobox with the created cells folders
            for(const QString& label : folder_stream)
                ui->ImageFolders->addItem(label);
            ui->ImageFolders->setEnabled(true);
            ui->ImageFolders->setCurrentIndex(0);

            // });
            // watcher.setFuture(future);
        }

        loading_label->setVisible(false);
    }
}

// on selecting an item in ImageFolders comboBox
void gui::on_ImageFolders_currentIndexChanged(int index) {
    QString folder = ui->ImageFolders->itemText(index);
    selected_folder =
        QString::fromStdString(todayDirectory) + "/" + folder;

    // list pictures in the directory
    QDir directory(selected_folder);
    QStringList files = directory.entryList(QDir::Files);
    pic_stream.clear();
    for(const QString& file : files)
        pic_stream.push_back(selected_folder + "/" + file);

    stream_index = 0;
    selected_image = pic_stream[stream_index];
    viewImage();
}

// on clicking Prev button
void gui::on_Prev_clicked() {
    if(!pic_stream.empty()) {
        selected_image = pic_stream[--stream_index % pic_stream.size()];
        viewImage();
    }
}

// on clicking Next button
void gui::on_Next_clicked() {
    if(!pic_stream.empty()) {
        selected_image = pic_stream[++stream_index % pic_stream.size()];
        viewImage();
    }
}
