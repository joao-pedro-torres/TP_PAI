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

    // ImageFolders = new QComboBox();

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

    // std::vector<QTableWidget*> descriptors({
    //     ui->HaralickDescriptors_01, ui->HaralickDescriptors_02,
    //     ui->HaralickDescriptors_04, ui->HaralickDescriptors_08,
    //     ui->HaralickDescriptors_16, ui->HaralickDescriptors_32
    // });

    // for(size_t i = 0; i < descriptors.size(); i++) {
    //     descriptors[i] = new QTableWidget(3, 2, descriptors[i]);
    //     descriptors[i]->horizontalHeader()->setVisible(false);
    //     descriptors[i]->verticalHeader()->setVisible(false);

    //     descriptors[i]->setItem(0, 0, new QTableWidgetItem("Entropy"));
    //     descriptors[i]->setItem(1, 0, new QTableWidgetItem("Homogeneity"));
    //     descriptors[i]->setItem(2, 0, new QTableWidgetItem("Contrast"));
    //     descriptors[i]->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // }

    // std::vector<QTableWidget*> moments({
    //     ui->HuGray, ui->HuH, ui->HuS, ui->HuV
    // });

    // for(size_t i = 0; i < moments.size(); i++) {
    //     moments[i] = new QTableWidget(7, 2, moments[i]);
    //     moments[i]->horizontalHeader()->setVisible(false);
    //     moments[i]->verticalHeader()->setVisible(false);
    //     moments[i]->setColumnWidth(0, 25);
    //     moments[i]->setRowHeight(0, 7);
    //     moments[i]->setRowHeight(1, 7);
    //     moments[i]->setRowHeight(2, 7);
    //     moments[i]->setRowHeight(3, 7);
    //     moments[i]->setRowHeight(4, 7);
    //     moments[i]->setRowHeight(5, 7);
    //     moments[i]->setRowHeight(6, 7);

    //     moments[i]->setItem(0, 0, new QTableWidgetItem("1º"));
    //     moments[i]->setItem(1, 0, new QTableWidgetItem("2º"));
    //     moments[i]->setItem(2, 0, new QTableWidgetItem("3º"));
    //     moments[i]->setItem(3, 0, new QTableWidgetItem("4º"));
    //     moments[i]->setItem(4, 0, new QTableWidgetItem("5º"));
    //     moments[i]->setItem(5, 0, new QTableWidgetItem("6º"));
    //     moments[i]->setItem(6, 0, new QTableWidgetItem("7º"));
    //     moments[i]->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // }
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

        // calculate haralick descriptors
        // std::vector<QTableWidget*> haralick_descriptors({
        //     ui->HaralickDescriptors_01, ui->HaralickDescriptors_02,
        //     ui->HaralickDescriptors_04, ui->HaralickDescriptors_08,
        //     ui->HaralickDescriptors_16, ui->HaralickDescriptors_32
        // });

        std::vector<QLabel*> entropy_descriptor({
            ui->Entropy_01_val, ui->Entropy_02_val, ui->Entropy_04_val,
            ui->Entropy_08_val, ui->Entropy_16_val, ui->Entropy_32_val
        });
        std::vector<QLabel*> homogeneity_descriptor({
            ui->Homogeneity_01_val, ui->Homogeneity_02_val, ui->Homogeneity_04_val,
            ui->Homogeneity_08_val, ui->Homogeneity_16_val, ui->Homogeneity_32_val
        });
        std::vector<QLabel*> contrast_descriptor({
            ui->Contrast_01_val, ui->Contrast_02_val, ui->Contrast_04_val,
            ui->Contrast_08_val, ui->Contrast_16_val, ui->Contrast_32_val
        });

        for(size_t i = 0; i < 6; i++) {
            double entropy = calculateEntropy(matrices[i]);
            double homogeneity = calculateHomogeneity(matrices[i]);
            double contrast = calculateContrast(matrices[i]);

            entropy_descriptor[i]->setText(QString::number(entropy));
            homogeneity_descriptor[i]->setText(QString::number(homogeneity));
            contrast_descriptor[i]->setText(QString::number(contrast));

            // haralick_descriptors[i]->setEditTriggers(
            //     QAbstractItemView::AllEditTriggers
            // );

            // haralick_descriptors[i]->clearContents();

            // haralick_descriptors[i]->setItem(
            //     0, 1, new QTableWidgetItem(QString::number(entropy, 'f', 2))
            // );
            // haralick_descriptors[i]->setItem(
            //     1, 1, new QTableWidgetItem(QString::number(homogeneity, 'f', 2))
            // );
            // haralick_descriptors[i]->setItem(
            //     2, 1, new QTableWidgetItem(QString::number(contrast, 'f', 2))
            // );

            // haralick_descriptors[i]->setEditTriggers(
            //     QAbstractItemView::NoEditTriggers
            // );
        }

        // calculate invariant hu moments
        std::vector<std::vector<double>> hu = calculateHuMomentsHSV(QImage(
            selected_image
        ));

        hu.push_back(calculateHuMoments(
            cvt_image_grayscale(selected_image).toImage()
        ));

        // std::vector<QTableWidget*> hu_channels({
        //     ui->HuH, ui->HuS, ui->HuV, ui->HuGray
        // });

        std::vector<QLabel*> hu_G({
            ui->HuG_01_val, ui->HuG_02_val, ui->HuG_03_val, ui->HuG_04_val,
            ui->HuG_05_val, ui->HuG_06_val, ui->HuG_07_val
        });
        std::vector<QLabel*> hu_H({
            ui->HuH_01_val, ui->HuH_02_val, ui->HuH_03_val, ui->HuH_04_val,
            ui->HuH_05_val, ui->HuH_06_val, ui->HuH_07_val
        });
        std::vector<QLabel*> hu_S({
            ui->HuS_01_val, ui->HuS_02_val, ui->HuS_03_val, ui->HuS_04_val,
            ui->HuS_05_val, ui->HuS_06_val, ui->HuS_07_val
        });
        std::vector<QLabel*> hu_V({
            ui->HuV_01_val, ui->HuV_02_val, ui->HuV_03_val, ui->HuV_04_val,
            ui->HuV_05_val, ui->HuV_06_val, ui->HuV_07_val
        });

        for(size_t i = 0; i < 7; i++) {
            hu_H[i]->setText(QString::number(hu[0][i]));
            hu_S[i]->setText(QString::number(hu[1][i]));
            hu_V[i]->setText(QString::number(hu[2][i]));
            hu_G[i]->setText(QString::number(hu[3][i]));
        }
    }
}

// on clicking OpenImage button (in menu File)
void gui::on_OpenImage_triggered() {
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

// on clicking ZoomOut button
void gui::on_ZoomOutButton_clicked() {
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
