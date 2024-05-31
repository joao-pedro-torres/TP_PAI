#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QFileDialog>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QLabel>
#include <QTransform>
#include <QScrollBar>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QTextEdit>
#include <QTableWidget>
#include <QComboBox>
#include <QFuture>
#include <QFutureWatcher>
#include <QtConcurrent/QtConcurrent>
#include <opencv2/opencv.hpp>

#include "xgboostwindow.h"
#include "effnetwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class gui;
}
QT_END_NAMESPACE

typedef struct {
    int id;
    std::string b_system;
    int x_coord;
    int y_coord;
} Cell_Nucleus;

typedef struct {
    int id;
    std::string path;
    int n_cells;
    std::vector<Cell_Nucleus> list_of_nucleus;
} CSV_Image;

class gui : public QMainWindow {
    Q_OBJECT

public:
    gui(QWidget *parent = nullptr);
    ~gui();

private slots:
    void on_OpenImage_triggered();
    void on_CloseImage_triggered();

    void on_ImportCSV_triggered();
    void on_CloseCSV_triggered();

    void on_ImportDataset_triggered();
    void on_CloseDataset_triggered();

    void on_StartButton_clicked();
    void on_ZoomInButton_clicked();
    void on_ZoomOutButton_clicked();

    void on_ImageFolders_currentIndexChanged(int index);
    void viewImage();

    void on_Prev_clicked();
    void on_Next_clicked();

    void on_EfficientNet_triggered();
    void on_XGBoost_triggered();

private:
    Ui::gui *ui;
    XGBoostWindow *xg;
    EffNetWindow *eff;

    // QFuture<void> future;
    // QFutureWatcher<void> watcher;
    QGraphicsScene *OriginalImage;
    QGraphicsScene *GrayscaleImage;
    QLabel ViewerPath;
    QLabel ViewerSize;
    double selected_image_size;
    QString dataset_path;
    QLabel *status_dataset_label;
    QString csv_path;
    QLabel *status_csv_label;
    std::vector<CSV_Image> images;
    QString work_folder_path;
    QComboBox ImageFolders;
    std::string todayDirectory;
    QString workspace; // directory where are stored the generated images
    QString selected_folder; // label selected in the combobox
    std::vector<QString> folder_stream; // list of labels
    QString selected_image; // image being shown in the graphicscenes
    std::vector<QString> pic_stream; // list of images in the selected label
    QLabel *loading_label;
    int stream_index;
};
#endif // GUI_H
