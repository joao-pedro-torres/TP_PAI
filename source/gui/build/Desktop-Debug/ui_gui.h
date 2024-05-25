/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui
{
public:
    QAction *OpenImage;
    QAction *CloseImage;
    QAction *ImportCSV;
    QAction *ImportDataset;
    QAction *CloseCSV;
    QAction *CloseDataset;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *ImageViewer;
    QTabWidget *TabbedImageViewer;
    QWidget *Original;
    QGraphicsView *OriginalViewer;
    QWidget *Grayscale;
    QGraphicsView *GrayscaleViewer;
    QLabel *ViewerSize;
    QLabel *ViewerPath;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Graphics;
    QHBoxLayout *HuMoments;
    QVBoxLayout *HuView_Gray;
    QLabel *HuGray_label;
    QGridLayout *Hu_Gray;
    QLabel *HuG_01_val;
    QLabel *HuG_02;
    QLabel *HuG_05;
    QLabel *HuG_06;
    QLabel *HuG_01;
    QLabel *HuG_04;
    QLabel *HuG_03;
    QLabel *HuG_07;
    QLabel *HuG_02_val;
    QLabel *HuG_03_val;
    QLabel *HuG_04_val;
    QLabel *HuG_05_val;
    QLabel *HuG_07_val;
    QLabel *HuG_06_val;
    QVBoxLayout *HuView_H;
    QLabel *HuH_label;
    QGridLayout *Hu_H;
    QLabel *HuH_04;
    QLabel *HuH_06_val;
    QLabel *HuH_01;
    QLabel *HuH_02_val;
    QLabel *HuH_02;
    QLabel *HuH_05_val;
    QLabel *HuH_04_val;
    QLabel *HuH_03_val;
    QLabel *HuH_03;
    QLabel *HuH_05;
    QLabel *HuH_06;
    QLabel *HuH_07_val;
    QLabel *HuH_01_val;
    QLabel *HuH_07;
    QVBoxLayout *HuView_S;
    QLabel *HuS_label;
    QGridLayout *Hu_S;
    QLabel *HuS_01_val;
    QLabel *HuS_02;
    QLabel *HuS_05;
    QLabel *HuS_06;
    QLabel *HuS_01;
    QLabel *HuS_04;
    QLabel *HuS_03;
    QLabel *HuS_07;
    QLabel *HuS_02_val;
    QLabel *HuS_03_val;
    QLabel *HuS_04_val;
    QLabel *HuS_05_val;
    QLabel *HuS_07_val;
    QLabel *HuS_06_val;
    QVBoxLayout *HuView_V;
    QLabel *HuV_label;
    QGridLayout *Hu_V;
    QLabel *HuV_01_val;
    QLabel *HuV_02;
    QLabel *HuV_05;
    QLabel *HuV_06;
    QLabel *HuV_01;
    QLabel *HuV_04;
    QLabel *HuV_03;
    QLabel *HuV_07;
    QLabel *HuV_02_val;
    QLabel *HuV_03_val;
    QLabel *HuV_04_val;
    QLabel *HuV_05_val;
    QLabel *HuV_07_val;
    QLabel *HuV_06_val;
    QLabel *HsvHistogramLabel;
    QLabel *HsvHistogramViewer;
    QLabel *GrayscaleHistogramLabel;
    QLabel *GrayscaleHistogramViewer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HaralickDescriptors;
    QLabel *HaralickDescriptors_label_01;
    QHBoxLayout *HaralickDescriptorsView_01;
    QLabel *CoOcurrenceMatrix_01;
    QGridLayout *Haralick_01;
    QLabel *Homogeneity_01_val;
    QLabel *Entropy_01;
    QLabel *Homogeneity_01;
    QLabel *Entropy_01_val;
    QLabel *Contras_01;
    QLabel *Contrast_01_val;
    QLabel *HaralickDescriptors_label_02;
    QHBoxLayout *HaralickDescriptorsView_02;
    QLabel *CoOcurrenceMatrix_02;
    QGridLayout *Haralick_02;
    QLabel *Homogeneity_02_val;
    QLabel *Entropy_02;
    QLabel *Homogeneity_02;
    QLabel *Entropy_02_val;
    QLabel *Contras_02;
    QLabel *Contrast_02_val;
    QLabel *HaralickDescriptors_label_04;
    QHBoxLayout *HaralickDescriptorsView_04;
    QLabel *CoOcurrenceMatrix_04;
    QGridLayout *Haralick_04;
    QLabel *Homogeneity_04_val;
    QLabel *Entropy_04_val;
    QLabel *Contras_04;
    QLabel *Entropy_04;
    QLabel *Contrast_04_val;
    QLabel *Homogeneity_04;
    QLabel *HaralickDescriptors_label_08;
    QHBoxLayout *HaralickDescriptorsView_08;
    QLabel *CoOcurrenceMatrix_08;
    QGridLayout *Haralick_08;
    QLabel *Homogeneity_08_val;
    QLabel *Entropy_08;
    QLabel *Homogeneity_08;
    QLabel *Entropy_08_val;
    QLabel *Contras_08;
    QLabel *Contrast_08_val;
    QLabel *HaralickDescriptors_label_16;
    QHBoxLayout *HaralickDescriptorsView_16;
    QLabel *CoOcurrenceMatrix_16;
    QGridLayout *Haralick_16;
    QLabel *Homogeneity_16_val;
    QLabel *Entropy_16;
    QLabel *Homogeneity_16;
    QLabel *Entropy_16_val;
    QLabel *Contras_16;
    QLabel *Contrast_16_val;
    QLabel *HaralickDescriptors_label_32;
    QHBoxLayout *HaralickDescriptorsView_32;
    QLabel *CoOcurrenceMatrix_32;
    QGridLayout *Haralick_32;
    QLabel *Homogeneity_32_val;
    QLabel *Entropy_32;
    QLabel *Homogeneity_32;
    QLabel *Entropy_32_val;
    QLabel *Contras_32;
    QLabel *Contrast_32_val;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *ImageFolders;
    QHBoxLayout *Navegation;
    QHBoxLayout *Zoom;
    QPushButton *StartButton;
    QPushButton *ZoomInButton;
    QPushButton *ZoomOutButton;
    QPushButton *Prev;
    QPushButton *Next;
    QMenuBar *menubar;
    QMenu *menuLoad_Image;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QString::fromUtf8("gui"));
        gui->resize(1662, 831);
        gui->setAutoFillBackground(true);
        gui->setStyleSheet(QString::fromUtf8(""));
        OpenImage = new QAction(gui);
        OpenImage->setObjectName(QString::fromUtf8("OpenImage"));
        CloseImage = new QAction(gui);
        CloseImage->setObjectName(QString::fromUtf8("CloseImage"));
        ImportCSV = new QAction(gui);
        ImportCSV->setObjectName(QString::fromUtf8("ImportCSV"));
        ImportDataset = new QAction(gui);
        ImportDataset->setObjectName(QString::fromUtf8("ImportDataset"));
        CloseCSV = new QAction(gui);
        CloseCSV->setObjectName(QString::fromUtf8("CloseCSV"));
        CloseDataset = new QAction(gui);
        CloseDataset->setObjectName(QString::fromUtf8("CloseDataset"));
        centralwidget = new QWidget(gui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 681, 671));
        ImageViewer = new QGridLayout(gridLayoutWidget);
        ImageViewer->setObjectName(QString::fromUtf8("ImageViewer"));
        ImageViewer->setContentsMargins(0, 0, 0, 0);
        TabbedImageViewer = new QTabWidget(gridLayoutWidget);
        TabbedImageViewer->setObjectName(QString::fromUtf8("TabbedImageViewer"));
        QFont font;
        font.setPointSize(14);
        TabbedImageViewer->setFont(font);
        Original = new QWidget();
        Original->setObjectName(QString::fromUtf8("Original"));
        OriginalViewer = new QGraphicsView(Original);
        OriginalViewer->setObjectName(QString::fromUtf8("OriginalViewer"));
        OriginalViewer->setGeometry(QRect(0, 0, 681, 631));
        OriginalViewer->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        TabbedImageViewer->addTab(Original, QString());
        Grayscale = new QWidget();
        Grayscale->setObjectName(QString::fromUtf8("Grayscale"));
        Grayscale->setEnabled(true);
        GrayscaleViewer = new QGraphicsView(Grayscale);
        GrayscaleViewer->setObjectName(QString::fromUtf8("GrayscaleViewer"));
        GrayscaleViewer->setGeometry(QRect(0, 0, 681, 631));
        GrayscaleViewer->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        GrayscaleViewer->setSceneRect(QRectF(0, 0, 0, 0));
        TabbedImageViewer->addTab(Grayscale, QString());

        ImageViewer->addWidget(TabbedImageViewer, 0, 0, 1, 1);

        ViewerSize = new QLabel(centralwidget);
        ViewerSize->setObjectName(QString::fromUtf8("ViewerSize"));
        ViewerSize->setGeometry(QRect(10, 730, 161, 20));
        ViewerSize->setStyleSheet(QString::fromUtf8("font: 9pt \"Noto Sans\";\n"
"background-color: palete(window);"));
        ViewerSize->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        ViewerPath = new QLabel(centralwidget);
        ViewerPath->setObjectName(QString::fromUtf8("ViewerPath"));
        ViewerPath->setGeometry(QRect(10, 710, 651, 20));
        ViewerPath->setStyleSheet(QString::fromUtf8("font: 9pt \"Noto Sans\";\n"
"background-color: palete(window);"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(700, 10, 482, 714));
        Graphics = new QVBoxLayout(verticalLayoutWidget_2);
        Graphics->setObjectName(QString::fromUtf8("Graphics"));
        Graphics->setContentsMargins(0, 0, 0, 0);
        HuMoments = new QHBoxLayout();
        HuMoments->setObjectName(QString::fromUtf8("HuMoments"));
        HuView_Gray = new QVBoxLayout();
        HuView_Gray->setObjectName(QString::fromUtf8("HuView_Gray"));
        HuGray_label = new QLabel(verticalLayoutWidget_2);
        HuGray_label->setObjectName(QString::fromUtf8("HuGray_label"));
        HuGray_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HuView_Gray->addWidget(HuGray_label);

        Hu_Gray = new QGridLayout();
        Hu_Gray->setObjectName(QString::fromUtf8("Hu_Gray"));
        Hu_Gray->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        Hu_Gray->setContentsMargins(1, -1, 1, -1);
        HuG_01_val = new QLabel(verticalLayoutWidget_2);
        HuG_01_val->setObjectName(QString::fromUtf8("HuG_01_val"));
        HuG_01_val->setAutoFillBackground(false);
        HuG_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_01_val, 0, 1, 1, 1);

        HuG_02 = new QLabel(verticalLayoutWidget_2);
        HuG_02->setObjectName(QString::fromUtf8("HuG_02"));
        HuG_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_02, 1, 0, 1, 1);

        HuG_05 = new QLabel(verticalLayoutWidget_2);
        HuG_05->setObjectName(QString::fromUtf8("HuG_05"));
        HuG_05->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_05, 4, 0, 1, 1);

        HuG_06 = new QLabel(verticalLayoutWidget_2);
        HuG_06->setObjectName(QString::fromUtf8("HuG_06"));
        HuG_06->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_06, 5, 0, 1, 1);

        HuG_01 = new QLabel(verticalLayoutWidget_2);
        HuG_01->setObjectName(QString::fromUtf8("HuG_01"));
        HuG_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_01, 0, 0, 1, 1);

        HuG_04 = new QLabel(verticalLayoutWidget_2);
        HuG_04->setObjectName(QString::fromUtf8("HuG_04"));
        HuG_04->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_04, 3, 0, 1, 1);

        HuG_03 = new QLabel(verticalLayoutWidget_2);
        HuG_03->setObjectName(QString::fromUtf8("HuG_03"));
        HuG_03->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_03, 2, 0, 1, 1);

        HuG_07 = new QLabel(verticalLayoutWidget_2);
        HuG_07->setObjectName(QString::fromUtf8("HuG_07"));
        HuG_07->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_Gray->addWidget(HuG_07, 6, 0, 1, 1);

        HuG_02_val = new QLabel(verticalLayoutWidget_2);
        HuG_02_val->setObjectName(QString::fromUtf8("HuG_02_val"));
        HuG_02_val->setAutoFillBackground(false);
        HuG_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_02_val, 1, 1, 1, 1);

        HuG_03_val = new QLabel(verticalLayoutWidget_2);
        HuG_03_val->setObjectName(QString::fromUtf8("HuG_03_val"));
        HuG_03_val->setAutoFillBackground(false);
        HuG_03_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_03_val, 2, 1, 1, 1);

        HuG_04_val = new QLabel(verticalLayoutWidget_2);
        HuG_04_val->setObjectName(QString::fromUtf8("HuG_04_val"));
        HuG_04_val->setAutoFillBackground(false);
        HuG_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_04_val, 3, 1, 1, 1);

        HuG_05_val = new QLabel(verticalLayoutWidget_2);
        HuG_05_val->setObjectName(QString::fromUtf8("HuG_05_val"));
        HuG_05_val->setAutoFillBackground(false);
        HuG_05_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_05_val, 4, 1, 1, 1);

        HuG_07_val = new QLabel(verticalLayoutWidget_2);
        HuG_07_val->setObjectName(QString::fromUtf8("HuG_07_val"));
        HuG_07_val->setAutoFillBackground(false);
        HuG_07_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_07_val, 6, 1, 1, 1);

        HuG_06_val = new QLabel(verticalLayoutWidget_2);
        HuG_06_val->setObjectName(QString::fromUtf8("HuG_06_val"));
        HuG_06_val->setAutoFillBackground(false);
        HuG_06_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_Gray->addWidget(HuG_06_val, 5, 1, 1, 1);


        HuView_Gray->addLayout(Hu_Gray);


        HuMoments->addLayout(HuView_Gray);

        HuView_H = new QVBoxLayout();
        HuView_H->setObjectName(QString::fromUtf8("HuView_H"));
        HuH_label = new QLabel(verticalLayoutWidget_2);
        HuH_label->setObjectName(QString::fromUtf8("HuH_label"));
        HuH_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HuView_H->addWidget(HuH_label);

        Hu_H = new QGridLayout();
        Hu_H->setObjectName(QString::fromUtf8("Hu_H"));
        Hu_H->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        Hu_H->setContentsMargins(1, -1, 1, -1);
        HuH_04 = new QLabel(verticalLayoutWidget_2);
        HuH_04->setObjectName(QString::fromUtf8("HuH_04"));
        HuH_04->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_04, 3, 0, 1, 1);

        HuH_06_val = new QLabel(verticalLayoutWidget_2);
        HuH_06_val->setObjectName(QString::fromUtf8("HuH_06_val"));
        HuH_06_val->setAutoFillBackground(false);
        HuH_06_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_06_val, 5, 1, 1, 1);

        HuH_01 = new QLabel(verticalLayoutWidget_2);
        HuH_01->setObjectName(QString::fromUtf8("HuH_01"));
        HuH_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_01, 0, 0, 1, 1);

        HuH_02_val = new QLabel(verticalLayoutWidget_2);
        HuH_02_val->setObjectName(QString::fromUtf8("HuH_02_val"));
        HuH_02_val->setAutoFillBackground(false);
        HuH_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_02_val, 1, 1, 1, 1);

        HuH_02 = new QLabel(verticalLayoutWidget_2);
        HuH_02->setObjectName(QString::fromUtf8("HuH_02"));
        HuH_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_02, 1, 0, 1, 1);

        HuH_05_val = new QLabel(verticalLayoutWidget_2);
        HuH_05_val->setObjectName(QString::fromUtf8("HuH_05_val"));
        HuH_05_val->setAutoFillBackground(false);
        HuH_05_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_05_val, 4, 1, 1, 1);

        HuH_04_val = new QLabel(verticalLayoutWidget_2);
        HuH_04_val->setObjectName(QString::fromUtf8("HuH_04_val"));
        HuH_04_val->setAutoFillBackground(false);
        HuH_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_04_val, 3, 1, 1, 1);

        HuH_03_val = new QLabel(verticalLayoutWidget_2);
        HuH_03_val->setObjectName(QString::fromUtf8("HuH_03_val"));
        HuH_03_val->setAutoFillBackground(false);
        HuH_03_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_03_val, 2, 1, 1, 1);

        HuH_03 = new QLabel(verticalLayoutWidget_2);
        HuH_03->setObjectName(QString::fromUtf8("HuH_03"));
        HuH_03->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_03, 2, 0, 1, 1);

        HuH_05 = new QLabel(verticalLayoutWidget_2);
        HuH_05->setObjectName(QString::fromUtf8("HuH_05"));
        HuH_05->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_05, 4, 0, 1, 1);

        HuH_06 = new QLabel(verticalLayoutWidget_2);
        HuH_06->setObjectName(QString::fromUtf8("HuH_06"));
        HuH_06->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_06, 5, 0, 1, 1);

        HuH_07_val = new QLabel(verticalLayoutWidget_2);
        HuH_07_val->setObjectName(QString::fromUtf8("HuH_07_val"));
        HuH_07_val->setAutoFillBackground(false);
        HuH_07_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_07_val, 6, 1, 1, 1);

        HuH_01_val = new QLabel(verticalLayoutWidget_2);
        HuH_01_val->setObjectName(QString::fromUtf8("HuH_01_val"));
        HuH_01_val->setAutoFillBackground(false);
        HuH_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_H->addWidget(HuH_01_val, 0, 1, 1, 1);

        HuH_07 = new QLabel(verticalLayoutWidget_2);
        HuH_07->setObjectName(QString::fromUtf8("HuH_07"));
        HuH_07->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_H->addWidget(HuH_07, 6, 0, 1, 1);


        HuView_H->addLayout(Hu_H);


        HuMoments->addLayout(HuView_H);

        HuView_S = new QVBoxLayout();
        HuView_S->setObjectName(QString::fromUtf8("HuView_S"));
        HuS_label = new QLabel(verticalLayoutWidget_2);
        HuS_label->setObjectName(QString::fromUtf8("HuS_label"));
        HuS_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HuView_S->addWidget(HuS_label);

        Hu_S = new QGridLayout();
        Hu_S->setObjectName(QString::fromUtf8("Hu_S"));
        Hu_S->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        Hu_S->setContentsMargins(1, -1, 1, -1);
        HuS_01_val = new QLabel(verticalLayoutWidget_2);
        HuS_01_val->setObjectName(QString::fromUtf8("HuS_01_val"));
        HuS_01_val->setAutoFillBackground(false);
        HuS_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_01_val, 0, 1, 1, 1);

        HuS_02 = new QLabel(verticalLayoutWidget_2);
        HuS_02->setObjectName(QString::fromUtf8("HuS_02"));
        HuS_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_02, 1, 0, 1, 1);

        HuS_05 = new QLabel(verticalLayoutWidget_2);
        HuS_05->setObjectName(QString::fromUtf8("HuS_05"));
        HuS_05->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_05, 4, 0, 1, 1);

        HuS_06 = new QLabel(verticalLayoutWidget_2);
        HuS_06->setObjectName(QString::fromUtf8("HuS_06"));
        HuS_06->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_06, 5, 0, 1, 1);

        HuS_01 = new QLabel(verticalLayoutWidget_2);
        HuS_01->setObjectName(QString::fromUtf8("HuS_01"));
        HuS_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_01, 0, 0, 1, 1);

        HuS_04 = new QLabel(verticalLayoutWidget_2);
        HuS_04->setObjectName(QString::fromUtf8("HuS_04"));
        HuS_04->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_04, 3, 0, 1, 1);

        HuS_03 = new QLabel(verticalLayoutWidget_2);
        HuS_03->setObjectName(QString::fromUtf8("HuS_03"));
        HuS_03->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_03, 2, 0, 1, 1);

        HuS_07 = new QLabel(verticalLayoutWidget_2);
        HuS_07->setObjectName(QString::fromUtf8("HuS_07"));
        HuS_07->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_S->addWidget(HuS_07, 6, 0, 1, 1);

        HuS_02_val = new QLabel(verticalLayoutWidget_2);
        HuS_02_val->setObjectName(QString::fromUtf8("HuS_02_val"));
        HuS_02_val->setAutoFillBackground(false);
        HuS_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_02_val, 1, 1, 1, 1);

        HuS_03_val = new QLabel(verticalLayoutWidget_2);
        HuS_03_val->setObjectName(QString::fromUtf8("HuS_03_val"));
        HuS_03_val->setAutoFillBackground(false);
        HuS_03_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_03_val, 2, 1, 1, 1);

        HuS_04_val = new QLabel(verticalLayoutWidget_2);
        HuS_04_val->setObjectName(QString::fromUtf8("HuS_04_val"));
        HuS_04_val->setAutoFillBackground(false);
        HuS_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_04_val, 3, 1, 1, 1);

        HuS_05_val = new QLabel(verticalLayoutWidget_2);
        HuS_05_val->setObjectName(QString::fromUtf8("HuS_05_val"));
        HuS_05_val->setAutoFillBackground(false);
        HuS_05_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_05_val, 4, 1, 1, 1);

        HuS_07_val = new QLabel(verticalLayoutWidget_2);
        HuS_07_val->setObjectName(QString::fromUtf8("HuS_07_val"));
        HuS_07_val->setAutoFillBackground(false);
        HuS_07_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_07_val, 6, 1, 1, 1);

        HuS_06_val = new QLabel(verticalLayoutWidget_2);
        HuS_06_val->setObjectName(QString::fromUtf8("HuS_06_val"));
        HuS_06_val->setAutoFillBackground(false);
        HuS_06_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_S->addWidget(HuS_06_val, 5, 1, 1, 1);


        HuView_S->addLayout(Hu_S);


        HuMoments->addLayout(HuView_S);

        HuView_V = new QVBoxLayout();
        HuView_V->setObjectName(QString::fromUtf8("HuView_V"));
        HuV_label = new QLabel(verticalLayoutWidget_2);
        HuV_label->setObjectName(QString::fromUtf8("HuV_label"));
        HuV_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HuView_V->addWidget(HuV_label);

        Hu_V = new QGridLayout();
        Hu_V->setObjectName(QString::fromUtf8("Hu_V"));
        Hu_V->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        Hu_V->setContentsMargins(1, -1, 1, -1);
        HuV_01_val = new QLabel(verticalLayoutWidget_2);
        HuV_01_val->setObjectName(QString::fromUtf8("HuV_01_val"));
        HuV_01_val->setAutoFillBackground(false);
        HuV_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_01_val, 0, 1, 1, 1);

        HuV_02 = new QLabel(verticalLayoutWidget_2);
        HuV_02->setObjectName(QString::fromUtf8("HuV_02"));
        HuV_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_02, 1, 0, 1, 1);

        HuV_05 = new QLabel(verticalLayoutWidget_2);
        HuV_05->setObjectName(QString::fromUtf8("HuV_05"));
        HuV_05->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_05, 4, 0, 1, 1);

        HuV_06 = new QLabel(verticalLayoutWidget_2);
        HuV_06->setObjectName(QString::fromUtf8("HuV_06"));
        HuV_06->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_06, 5, 0, 1, 1);

        HuV_01 = new QLabel(verticalLayoutWidget_2);
        HuV_01->setObjectName(QString::fromUtf8("HuV_01"));
        HuV_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_01, 0, 0, 1, 1);

        HuV_04 = new QLabel(verticalLayoutWidget_2);
        HuV_04->setObjectName(QString::fromUtf8("HuV_04"));
        HuV_04->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_04, 3, 0, 1, 1);

        HuV_03 = new QLabel(verticalLayoutWidget_2);
        HuV_03->setObjectName(QString::fromUtf8("HuV_03"));
        HuV_03->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_03, 2, 0, 1, 1);

        HuV_07 = new QLabel(verticalLayoutWidget_2);
        HuV_07->setObjectName(QString::fromUtf8("HuV_07"));
        HuV_07->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Hu_V->addWidget(HuV_07, 6, 0, 1, 1);

        HuV_02_val = new QLabel(verticalLayoutWidget_2);
        HuV_02_val->setObjectName(QString::fromUtf8("HuV_02_val"));
        HuV_02_val->setAutoFillBackground(false);
        HuV_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_02_val, 1, 1, 1, 1);

        HuV_03_val = new QLabel(verticalLayoutWidget_2);
        HuV_03_val->setObjectName(QString::fromUtf8("HuV_03_val"));
        HuV_03_val->setAutoFillBackground(false);
        HuV_03_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_03_val, 2, 1, 1, 1);

        HuV_04_val = new QLabel(verticalLayoutWidget_2);
        HuV_04_val->setObjectName(QString::fromUtf8("HuV_04_val"));
        HuV_04_val->setAutoFillBackground(false);
        HuV_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_04_val, 3, 1, 1, 1);

        HuV_05_val = new QLabel(verticalLayoutWidget_2);
        HuV_05_val->setObjectName(QString::fromUtf8("HuV_05_val"));
        HuV_05_val->setAutoFillBackground(false);
        HuV_05_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_05_val, 4, 1, 1, 1);

        HuV_07_val = new QLabel(verticalLayoutWidget_2);
        HuV_07_val->setObjectName(QString::fromUtf8("HuV_07_val"));
        HuV_07_val->setAutoFillBackground(false);
        HuV_07_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_07_val, 6, 1, 1, 1);

        HuV_06_val = new QLabel(verticalLayoutWidget_2);
        HuV_06_val->setObjectName(QString::fromUtf8("HuV_06_val"));
        HuV_06_val->setAutoFillBackground(false);
        HuV_06_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Hu_V->addWidget(HuV_06_val, 5, 1, 1, 1);


        HuView_V->addLayout(Hu_V);


        HuMoments->addLayout(HuView_V);


        Graphics->addLayout(HuMoments);

        HsvHistogramLabel = new QLabel(verticalLayoutWidget_2);
        HsvHistogramLabel->setObjectName(QString::fromUtf8("HsvHistogramLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HsvHistogramLabel->sizePolicy().hasHeightForWidth());
        HsvHistogramLabel->setSizePolicy(sizePolicy);
        HsvHistogramLabel->setMaximumSize(QSize(509, 16777215));

        Graphics->addWidget(HsvHistogramLabel);

        HsvHistogramViewer = new QLabel(verticalLayoutWidget_2);
        HsvHistogramViewer->setObjectName(QString::fromUtf8("HsvHistogramViewer"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HsvHistogramViewer->sizePolicy().hasHeightForWidth());
        HsvHistogramViewer->setSizePolicy(sizePolicy1);
        HsvHistogramViewer->setMinimumSize(QSize(480, 240));
        HsvHistogramViewer->setAutoFillBackground(false);
        HsvHistogramViewer->setStyleSheet(QString::fromUtf8("background-color: palete(window)"));
        HsvHistogramViewer->setFrameShape(QFrame::Shape::Panel);
        HsvHistogramViewer->setLineWidth(2);
        HsvHistogramViewer->setMidLineWidth(0);
        HsvHistogramViewer->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Graphics->addWidget(HsvHistogramViewer);

        GrayscaleHistogramLabel = new QLabel(verticalLayoutWidget_2);
        GrayscaleHistogramLabel->setObjectName(QString::fromUtf8("GrayscaleHistogramLabel"));

        Graphics->addWidget(GrayscaleHistogramLabel);

        GrayscaleHistogramViewer = new QLabel(verticalLayoutWidget_2);
        GrayscaleHistogramViewer->setObjectName(QString::fromUtf8("GrayscaleHistogramViewer"));
        sizePolicy1.setHeightForWidth(GrayscaleHistogramViewer->sizePolicy().hasHeightForWidth());
        GrayscaleHistogramViewer->setSizePolicy(sizePolicy1);
        GrayscaleHistogramViewer->setMinimumSize(QSize(480, 230));
        GrayscaleHistogramViewer->setAutoFillBackground(false);
        GrayscaleHistogramViewer->setStyleSheet(QString::fromUtf8("background-color: palete(window)"));
        GrayscaleHistogramViewer->setFrameShape(QFrame::Shape::Panel);
        GrayscaleHistogramViewer->setLineWidth(2);
        GrayscaleHistogramViewer->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Graphics->addWidget(GrayscaleHistogramViewer);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1190, 10, 271, 701));
        HaralickDescriptors = new QVBoxLayout(verticalLayoutWidget);
        HaralickDescriptors->setObjectName(QString::fromUtf8("HaralickDescriptors"));
        HaralickDescriptors->setContentsMargins(0, 0, 0, 0);
        HaralickDescriptors_label_01 = new QLabel(verticalLayoutWidget);
        HaralickDescriptors_label_01->setObjectName(QString::fromUtf8("HaralickDescriptors_label_01"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(HaralickDescriptors_label_01->sizePolicy().hasHeightForWidth());
        HaralickDescriptors_label_01->setSizePolicy(sizePolicy2);
        HaralickDescriptors_label_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptors->addWidget(HaralickDescriptors_label_01);

        HaralickDescriptorsView_01 = new QHBoxLayout();
        HaralickDescriptorsView_01->setObjectName(QString::fromUtf8("HaralickDescriptorsView_01"));
        CoOcurrenceMatrix_01 = new QLabel(verticalLayoutWidget);
        CoOcurrenceMatrix_01->setObjectName(QString::fromUtf8("CoOcurrenceMatrix_01"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(CoOcurrenceMatrix_01->sizePolicy().hasHeightForWidth());
        CoOcurrenceMatrix_01->setSizePolicy(sizePolicy3);
        CoOcurrenceMatrix_01->setMinimumSize(QSize(75, 75));
        CoOcurrenceMatrix_01->setBaseSize(QSize(100, 100));
        CoOcurrenceMatrix_01->setAutoFillBackground(false);
        CoOcurrenceMatrix_01->setStyleSheet(QString::fromUtf8(""));
        CoOcurrenceMatrix_01->setFrameShape(QFrame::Shape::Panel);
        CoOcurrenceMatrix_01->setLineWidth(2);
        CoOcurrenceMatrix_01->setMidLineWidth(0);
        CoOcurrenceMatrix_01->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptorsView_01->addWidget(CoOcurrenceMatrix_01);

        Haralick_01 = new QGridLayout();
        Haralick_01->setObjectName(QString::fromUtf8("Haralick_01"));
        Homogeneity_01_val = new QLabel(verticalLayoutWidget);
        Homogeneity_01_val->setObjectName(QString::fromUtf8("Homogeneity_01_val"));
        QFont font1;
        Homogeneity_01_val->setFont(font1);
        Homogeneity_01_val->setFrameShape(QFrame::Shape::NoFrame);
        Homogeneity_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_01->addWidget(Homogeneity_01_val, 1, 1, 1, 1);

        Entropy_01 = new QLabel(verticalLayoutWidget);
        Entropy_01->setObjectName(QString::fromUtf8("Entropy_01"));
        Entropy_01->setFont(font1);
        Entropy_01->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_01->setFrameShadow(QFrame::Shadow::Plain);
        Entropy_01->setLineWidth(1);

        Haralick_01->addWidget(Entropy_01, 0, 0, 1, 1);

        Homogeneity_01 = new QLabel(verticalLayoutWidget);
        Homogeneity_01->setObjectName(QString::fromUtf8("Homogeneity_01"));
        Homogeneity_01->setFont(font1);
        Homogeneity_01->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_01->addWidget(Homogeneity_01, 1, 0, 1, 1);

        Entropy_01_val = new QLabel(verticalLayoutWidget);
        Entropy_01_val->setObjectName(QString::fromUtf8("Entropy_01_val"));
        Entropy_01_val->setFont(font1);
        Entropy_01_val->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_01->addWidget(Entropy_01_val, 0, 1, 1, 1);

        Contras_01 = new QLabel(verticalLayoutWidget);
        Contras_01->setObjectName(QString::fromUtf8("Contras_01"));
        Contras_01->setFont(font1);
        Contras_01->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_01->addWidget(Contras_01, 2, 0, 1, 1);

        Contrast_01_val = new QLabel(verticalLayoutWidget);
        Contrast_01_val->setObjectName(QString::fromUtf8("Contrast_01_val"));
        Contrast_01_val->setFont(font1);
        Contrast_01_val->setFrameShape(QFrame::Shape::NoFrame);
        Contrast_01_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_01->addWidget(Contrast_01_val, 2, 1, 1, 1);


        HaralickDescriptorsView_01->addLayout(Haralick_01);


        HaralickDescriptors->addLayout(HaralickDescriptorsView_01);

        HaralickDescriptors_label_02 = new QLabel(verticalLayoutWidget);
        HaralickDescriptors_label_02->setObjectName(QString::fromUtf8("HaralickDescriptors_label_02"));
        sizePolicy2.setHeightForWidth(HaralickDescriptors_label_02->sizePolicy().hasHeightForWidth());
        HaralickDescriptors_label_02->setSizePolicy(sizePolicy2);
        HaralickDescriptors_label_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptors->addWidget(HaralickDescriptors_label_02);

        HaralickDescriptorsView_02 = new QHBoxLayout();
        HaralickDescriptorsView_02->setObjectName(QString::fromUtf8("HaralickDescriptorsView_02"));
        CoOcurrenceMatrix_02 = new QLabel(verticalLayoutWidget);
        CoOcurrenceMatrix_02->setObjectName(QString::fromUtf8("CoOcurrenceMatrix_02"));
        sizePolicy3.setHeightForWidth(CoOcurrenceMatrix_02->sizePolicy().hasHeightForWidth());
        CoOcurrenceMatrix_02->setSizePolicy(sizePolicy3);
        CoOcurrenceMatrix_02->setMinimumSize(QSize(75, 75));
        CoOcurrenceMatrix_02->setBaseSize(QSize(100, 100));
        CoOcurrenceMatrix_02->setAutoFillBackground(false);
        CoOcurrenceMatrix_02->setStyleSheet(QString::fromUtf8(""));
        CoOcurrenceMatrix_02->setFrameShape(QFrame::Shape::Panel);
        CoOcurrenceMatrix_02->setLineWidth(2);
        CoOcurrenceMatrix_02->setMidLineWidth(0);
        CoOcurrenceMatrix_02->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptorsView_02->addWidget(CoOcurrenceMatrix_02);

        Haralick_02 = new QGridLayout();
        Haralick_02->setObjectName(QString::fromUtf8("Haralick_02"));
        Homogeneity_02_val = new QLabel(verticalLayoutWidget);
        Homogeneity_02_val->setObjectName(QString::fromUtf8("Homogeneity_02_val"));
        QFont font2;
        font2.setPointSize(10);
        Homogeneity_02_val->setFont(font2);
        Homogeneity_02_val->setFrameShape(QFrame::Shape::NoFrame);
        Homogeneity_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_02->addWidget(Homogeneity_02_val, 1, 1, 1, 1);

        Entropy_02 = new QLabel(verticalLayoutWidget);
        Entropy_02->setObjectName(QString::fromUtf8("Entropy_02"));
        Entropy_02->setFont(font2);
        Entropy_02->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_02->addWidget(Entropy_02, 0, 0, 1, 1);

        Homogeneity_02 = new QLabel(verticalLayoutWidget);
        Homogeneity_02->setObjectName(QString::fromUtf8("Homogeneity_02"));
        Homogeneity_02->setFont(font2);
        Homogeneity_02->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_02->addWidget(Homogeneity_02, 1, 0, 1, 1);

        Entropy_02_val = new QLabel(verticalLayoutWidget);
        Entropy_02_val->setObjectName(QString::fromUtf8("Entropy_02_val"));
        Entropy_02_val->setFont(font2);
        Entropy_02_val->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_02->addWidget(Entropy_02_val, 0, 1, 1, 1);

        Contras_02 = new QLabel(verticalLayoutWidget);
        Contras_02->setObjectName(QString::fromUtf8("Contras_02"));
        Contras_02->setFont(font2);
        Contras_02->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_02->addWidget(Contras_02, 2, 0, 1, 1);

        Contrast_02_val = new QLabel(verticalLayoutWidget);
        Contrast_02_val->setObjectName(QString::fromUtf8("Contrast_02_val"));
        Contrast_02_val->setFont(font2);
        Contrast_02_val->setFrameShape(QFrame::Shape::NoFrame);
        Contrast_02_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_02->addWidget(Contrast_02_val, 2, 1, 1, 1);


        HaralickDescriptorsView_02->addLayout(Haralick_02);


        HaralickDescriptors->addLayout(HaralickDescriptorsView_02);

        HaralickDescriptors_label_04 = new QLabel(verticalLayoutWidget);
        HaralickDescriptors_label_04->setObjectName(QString::fromUtf8("HaralickDescriptors_label_04"));
        sizePolicy2.setHeightForWidth(HaralickDescriptors_label_04->sizePolicy().hasHeightForWidth());
        HaralickDescriptors_label_04->setSizePolicy(sizePolicy2);
        HaralickDescriptors_label_04->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptors->addWidget(HaralickDescriptors_label_04);

        HaralickDescriptorsView_04 = new QHBoxLayout();
        HaralickDescriptorsView_04->setObjectName(QString::fromUtf8("HaralickDescriptorsView_04"));
        CoOcurrenceMatrix_04 = new QLabel(verticalLayoutWidget);
        CoOcurrenceMatrix_04->setObjectName(QString::fromUtf8("CoOcurrenceMatrix_04"));
        sizePolicy3.setHeightForWidth(CoOcurrenceMatrix_04->sizePolicy().hasHeightForWidth());
        CoOcurrenceMatrix_04->setSizePolicy(sizePolicy3);
        CoOcurrenceMatrix_04->setMinimumSize(QSize(75, 75));
        CoOcurrenceMatrix_04->setBaseSize(QSize(100, 100));
        CoOcurrenceMatrix_04->setAutoFillBackground(false);
        CoOcurrenceMatrix_04->setStyleSheet(QString::fromUtf8(""));
        CoOcurrenceMatrix_04->setFrameShape(QFrame::Shape::Panel);
        CoOcurrenceMatrix_04->setLineWidth(2);
        CoOcurrenceMatrix_04->setMidLineWidth(0);
        CoOcurrenceMatrix_04->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptorsView_04->addWidget(CoOcurrenceMatrix_04);

        Haralick_04 = new QGridLayout();
        Haralick_04->setObjectName(QString::fromUtf8("Haralick_04"));
        Homogeneity_04_val = new QLabel(verticalLayoutWidget);
        Homogeneity_04_val->setObjectName(QString::fromUtf8("Homogeneity_04_val"));
        Homogeneity_04_val->setFont(font2);
        Homogeneity_04_val->setFrameShape(QFrame::Shape::NoFrame);
        Homogeneity_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_04->addWidget(Homogeneity_04_val, 1, 1, 1, 1);

        Entropy_04_val = new QLabel(verticalLayoutWidget);
        Entropy_04_val->setObjectName(QString::fromUtf8("Entropy_04_val"));
        Entropy_04_val->setFont(font2);
        Entropy_04_val->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_04->addWidget(Entropy_04_val, 0, 1, 1, 1);

        Contras_04 = new QLabel(verticalLayoutWidget);
        Contras_04->setObjectName(QString::fromUtf8("Contras_04"));
        Contras_04->setFont(font2);
        Contras_04->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_04->addWidget(Contras_04, 2, 0, 1, 1);

        Entropy_04 = new QLabel(verticalLayoutWidget);
        Entropy_04->setObjectName(QString::fromUtf8("Entropy_04"));
        Entropy_04->setFont(font2);
        Entropy_04->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_04->addWidget(Entropy_04, 0, 0, 1, 1);

        Contrast_04_val = new QLabel(verticalLayoutWidget);
        Contrast_04_val->setObjectName(QString::fromUtf8("Contrast_04_val"));
        Contrast_04_val->setFont(font2);
        Contrast_04_val->setFrameShape(QFrame::Shape::NoFrame);
        Contrast_04_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_04->addWidget(Contrast_04_val, 2, 1, 1, 1);

        Homogeneity_04 = new QLabel(verticalLayoutWidget);
        Homogeneity_04->setObjectName(QString::fromUtf8("Homogeneity_04"));
        Homogeneity_04->setFont(font2);
        Homogeneity_04->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_04->addWidget(Homogeneity_04, 1, 0, 1, 1);


        HaralickDescriptorsView_04->addLayout(Haralick_04);


        HaralickDescriptors->addLayout(HaralickDescriptorsView_04);

        HaralickDescriptors_label_08 = new QLabel(verticalLayoutWidget);
        HaralickDescriptors_label_08->setObjectName(QString::fromUtf8("HaralickDescriptors_label_08"));
        sizePolicy2.setHeightForWidth(HaralickDescriptors_label_08->sizePolicy().hasHeightForWidth());
        HaralickDescriptors_label_08->setSizePolicy(sizePolicy2);
        HaralickDescriptors_label_08->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptors->addWidget(HaralickDescriptors_label_08);

        HaralickDescriptorsView_08 = new QHBoxLayout();
        HaralickDescriptorsView_08->setObjectName(QString::fromUtf8("HaralickDescriptorsView_08"));
        CoOcurrenceMatrix_08 = new QLabel(verticalLayoutWidget);
        CoOcurrenceMatrix_08->setObjectName(QString::fromUtf8("CoOcurrenceMatrix_08"));
        sizePolicy3.setHeightForWidth(CoOcurrenceMatrix_08->sizePolicy().hasHeightForWidth());
        CoOcurrenceMatrix_08->setSizePolicy(sizePolicy3);
        CoOcurrenceMatrix_08->setMinimumSize(QSize(75, 75));
        CoOcurrenceMatrix_08->setBaseSize(QSize(100, 100));
        CoOcurrenceMatrix_08->setAutoFillBackground(false);
        CoOcurrenceMatrix_08->setStyleSheet(QString::fromUtf8(""));
        CoOcurrenceMatrix_08->setFrameShape(QFrame::Shape::Panel);
        CoOcurrenceMatrix_08->setLineWidth(2);
        CoOcurrenceMatrix_08->setMidLineWidth(0);
        CoOcurrenceMatrix_08->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptorsView_08->addWidget(CoOcurrenceMatrix_08);

        Haralick_08 = new QGridLayout();
        Haralick_08->setObjectName(QString::fromUtf8("Haralick_08"));
        Homogeneity_08_val = new QLabel(verticalLayoutWidget);
        Homogeneity_08_val->setObjectName(QString::fromUtf8("Homogeneity_08_val"));
        Homogeneity_08_val->setFont(font2);
        Homogeneity_08_val->setFrameShape(QFrame::Shape::NoFrame);
        Homogeneity_08_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_08->addWidget(Homogeneity_08_val, 1, 1, 1, 1);

        Entropy_08 = new QLabel(verticalLayoutWidget);
        Entropy_08->setObjectName(QString::fromUtf8("Entropy_08"));
        Entropy_08->setFont(font2);
        Entropy_08->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_08->addWidget(Entropy_08, 0, 0, 1, 1);

        Homogeneity_08 = new QLabel(verticalLayoutWidget);
        Homogeneity_08->setObjectName(QString::fromUtf8("Homogeneity_08"));
        Homogeneity_08->setFont(font2);
        Homogeneity_08->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_08->addWidget(Homogeneity_08, 1, 0, 1, 1);

        Entropy_08_val = new QLabel(verticalLayoutWidget);
        Entropy_08_val->setObjectName(QString::fromUtf8("Entropy_08_val"));
        Entropy_08_val->setFont(font2);
        Entropy_08_val->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_08_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_08->addWidget(Entropy_08_val, 0, 1, 1, 1);

        Contras_08 = new QLabel(verticalLayoutWidget);
        Contras_08->setObjectName(QString::fromUtf8("Contras_08"));
        Contras_08->setFont(font2);
        Contras_08->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_08->addWidget(Contras_08, 2, 0, 1, 1);

        Contrast_08_val = new QLabel(verticalLayoutWidget);
        Contrast_08_val->setObjectName(QString::fromUtf8("Contrast_08_val"));
        Contrast_08_val->setFont(font2);
        Contrast_08_val->setFrameShape(QFrame::Shape::NoFrame);
        Contrast_08_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_08->addWidget(Contrast_08_val, 2, 1, 1, 1);


        HaralickDescriptorsView_08->addLayout(Haralick_08);


        HaralickDescriptors->addLayout(HaralickDescriptorsView_08);

        HaralickDescriptors_label_16 = new QLabel(verticalLayoutWidget);
        HaralickDescriptors_label_16->setObjectName(QString::fromUtf8("HaralickDescriptors_label_16"));
        sizePolicy2.setHeightForWidth(HaralickDescriptors_label_16->sizePolicy().hasHeightForWidth());
        HaralickDescriptors_label_16->setSizePolicy(sizePolicy2);
        HaralickDescriptors_label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptors->addWidget(HaralickDescriptors_label_16);

        HaralickDescriptorsView_16 = new QHBoxLayout();
        HaralickDescriptorsView_16->setObjectName(QString::fromUtf8("HaralickDescriptorsView_16"));
        CoOcurrenceMatrix_16 = new QLabel(verticalLayoutWidget);
        CoOcurrenceMatrix_16->setObjectName(QString::fromUtf8("CoOcurrenceMatrix_16"));
        sizePolicy3.setHeightForWidth(CoOcurrenceMatrix_16->sizePolicy().hasHeightForWidth());
        CoOcurrenceMatrix_16->setSizePolicy(sizePolicy3);
        CoOcurrenceMatrix_16->setMinimumSize(QSize(75, 75));
        CoOcurrenceMatrix_16->setBaseSize(QSize(100, 100));
        CoOcurrenceMatrix_16->setAutoFillBackground(false);
        CoOcurrenceMatrix_16->setStyleSheet(QString::fromUtf8(""));
        CoOcurrenceMatrix_16->setFrameShape(QFrame::Shape::Panel);
        CoOcurrenceMatrix_16->setLineWidth(2);
        CoOcurrenceMatrix_16->setMidLineWidth(0);
        CoOcurrenceMatrix_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptorsView_16->addWidget(CoOcurrenceMatrix_16);

        Haralick_16 = new QGridLayout();
        Haralick_16->setObjectName(QString::fromUtf8("Haralick_16"));
        Homogeneity_16_val = new QLabel(verticalLayoutWidget);
        Homogeneity_16_val->setObjectName(QString::fromUtf8("Homogeneity_16_val"));
        Homogeneity_16_val->setFont(font2);
        Homogeneity_16_val->setFrameShape(QFrame::Shape::NoFrame);
        Homogeneity_16_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_16->addWidget(Homogeneity_16_val, 1, 1, 1, 1);

        Entropy_16 = new QLabel(verticalLayoutWidget);
        Entropy_16->setObjectName(QString::fromUtf8("Entropy_16"));
        Entropy_16->setFont(font2);
        Entropy_16->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_16->addWidget(Entropy_16, 0, 0, 1, 1);

        Homogeneity_16 = new QLabel(verticalLayoutWidget);
        Homogeneity_16->setObjectName(QString::fromUtf8("Homogeneity_16"));
        Homogeneity_16->setFont(font2);
        Homogeneity_16->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_16->addWidget(Homogeneity_16, 1, 0, 1, 1);

        Entropy_16_val = new QLabel(verticalLayoutWidget);
        Entropy_16_val->setObjectName(QString::fromUtf8("Entropy_16_val"));
        Entropy_16_val->setFont(font2);
        Entropy_16_val->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_16_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_16->addWidget(Entropy_16_val, 0, 1, 1, 1);

        Contras_16 = new QLabel(verticalLayoutWidget);
        Contras_16->setObjectName(QString::fromUtf8("Contras_16"));
        Contras_16->setFont(font2);
        Contras_16->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_16->addWidget(Contras_16, 2, 0, 1, 1);

        Contrast_16_val = new QLabel(verticalLayoutWidget);
        Contrast_16_val->setObjectName(QString::fromUtf8("Contrast_16_val"));
        Contrast_16_val->setFont(font2);
        Contrast_16_val->setFrameShape(QFrame::Shape::NoFrame);
        Contrast_16_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_16->addWidget(Contrast_16_val, 2, 1, 1, 1);


        HaralickDescriptorsView_16->addLayout(Haralick_16);


        HaralickDescriptors->addLayout(HaralickDescriptorsView_16);

        HaralickDescriptors_label_32 = new QLabel(verticalLayoutWidget);
        HaralickDescriptors_label_32->setObjectName(QString::fromUtf8("HaralickDescriptors_label_32"));
        sizePolicy2.setHeightForWidth(HaralickDescriptors_label_32->sizePolicy().hasHeightForWidth());
        HaralickDescriptors_label_32->setSizePolicy(sizePolicy2);
        HaralickDescriptors_label_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptors->addWidget(HaralickDescriptors_label_32);

        HaralickDescriptorsView_32 = new QHBoxLayout();
        HaralickDescriptorsView_32->setObjectName(QString::fromUtf8("HaralickDescriptorsView_32"));
        CoOcurrenceMatrix_32 = new QLabel(verticalLayoutWidget);
        CoOcurrenceMatrix_32->setObjectName(QString::fromUtf8("CoOcurrenceMatrix_32"));
        sizePolicy3.setHeightForWidth(CoOcurrenceMatrix_32->sizePolicy().hasHeightForWidth());
        CoOcurrenceMatrix_32->setSizePolicy(sizePolicy3);
        CoOcurrenceMatrix_32->setMinimumSize(QSize(75, 75));
        CoOcurrenceMatrix_32->setBaseSize(QSize(100, 100));
        CoOcurrenceMatrix_32->setAutoFillBackground(false);
        CoOcurrenceMatrix_32->setStyleSheet(QString::fromUtf8(""));
        CoOcurrenceMatrix_32->setFrameShape(QFrame::Shape::Panel);
        CoOcurrenceMatrix_32->setLineWidth(2);
        CoOcurrenceMatrix_32->setMidLineWidth(0);
        CoOcurrenceMatrix_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        HaralickDescriptorsView_32->addWidget(CoOcurrenceMatrix_32);

        Haralick_32 = new QGridLayout();
        Haralick_32->setObjectName(QString::fromUtf8("Haralick_32"));
        Homogeneity_32_val = new QLabel(verticalLayoutWidget);
        Homogeneity_32_val->setObjectName(QString::fromUtf8("Homogeneity_32_val"));
        Homogeneity_32_val->setFont(font2);
        Homogeneity_32_val->setFrameShape(QFrame::Shape::NoFrame);
        Homogeneity_32_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_32->addWidget(Homogeneity_32_val, 1, 1, 1, 1);

        Entropy_32 = new QLabel(verticalLayoutWidget);
        Entropy_32->setObjectName(QString::fromUtf8("Entropy_32"));
        Entropy_32->setFont(font2);
        Entropy_32->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_32->addWidget(Entropy_32, 0, 0, 1, 1);

        Homogeneity_32 = new QLabel(verticalLayoutWidget);
        Homogeneity_32->setObjectName(QString::fromUtf8("Homogeneity_32"));
        Homogeneity_32->setFont(font2);
        Homogeneity_32->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_32->addWidget(Homogeneity_32, 1, 0, 1, 1);

        Entropy_32_val = new QLabel(verticalLayoutWidget);
        Entropy_32_val->setObjectName(QString::fromUtf8("Entropy_32_val"));
        Entropy_32_val->setFont(font2);
        Entropy_32_val->setFrameShape(QFrame::Shape::NoFrame);
        Entropy_32_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_32->addWidget(Entropy_32_val, 0, 1, 1, 1);

        Contras_32 = new QLabel(verticalLayoutWidget);
        Contras_32->setObjectName(QString::fromUtf8("Contras_32"));
        Contras_32->setFont(font2);
        Contras_32->setFrameShape(QFrame::Shape::NoFrame);

        Haralick_32->addWidget(Contras_32, 2, 0, 1, 1);

        Contrast_32_val = new QLabel(verticalLayoutWidget);
        Contrast_32_val->setObjectName(QString::fromUtf8("Contrast_32_val"));
        Contrast_32_val->setFont(font2);
        Contrast_32_val->setFrameShape(QFrame::Shape::NoFrame);
        Contrast_32_val->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Haralick_32->addWidget(Contrast_32_val, 2, 1, 1, 1);


        HaralickDescriptorsView_32->addLayout(Haralick_32);


        HaralickDescriptors->addLayout(HaralickDescriptorsView_32);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 680, 681, 36));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ImageFolders = new QComboBox(horizontalLayoutWidget_2);
        ImageFolders->setObjectName(QString::fromUtf8("ImageFolders"));
        sizePolicy1.setHeightForWidth(ImageFolders->sizePolicy().hasHeightForWidth());
        ImageFolders->setSizePolicy(sizePolicy1);
        ImageFolders->setMinimumSize(QSize(200, 30));
        QFont font3;
        font3.setPointSize(12);
        ImageFolders->setFont(font3);

        horizontalLayout->addWidget(ImageFolders);

        Navegation = new QHBoxLayout();
        Navegation->setObjectName(QString::fromUtf8("Navegation"));
        Zoom = new QHBoxLayout();
        Zoom->setObjectName(QString::fromUtf8("Zoom"));
        StartButton = new QPushButton(horizontalLayoutWidget_2);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setMinimumSize(QSize(0, 30));
        StartButton->setFont(font3);
        StartButton->setStyleSheet(QString::fromUtf8("background-color: green"));

        Zoom->addWidget(StartButton);

        ZoomInButton = new QPushButton(horizontalLayoutWidget_2);
        ZoomInButton->setObjectName(QString::fromUtf8("ZoomInButton"));
        sizePolicy2.setHeightForWidth(ZoomInButton->sizePolicy().hasHeightForWidth());
        ZoomInButton->setSizePolicy(sizePolicy2);
        ZoomInButton->setMinimumSize(QSize(0, 30));
        ZoomInButton->setFont(font3);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("zoom-in")));
        ZoomInButton->setIcon(icon);

        Zoom->addWidget(ZoomInButton);

        ZoomOutButton = new QPushButton(horizontalLayoutWidget_2);
        ZoomOutButton->setObjectName(QString::fromUtf8("ZoomOutButton"));
        sizePolicy2.setHeightForWidth(ZoomOutButton->sizePolicy().hasHeightForWidth());
        ZoomOutButton->setSizePolicy(sizePolicy2);
        ZoomOutButton->setMinimumSize(QSize(0, 30));
        ZoomOutButton->setFont(font3);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("zoom-out")));
        ZoomOutButton->setIcon(icon1);

        Zoom->addWidget(ZoomOutButton);


        Navegation->addLayout(Zoom);

        Prev = new QPushButton(horizontalLayoutWidget_2);
        Prev->setObjectName(QString::fromUtf8("Prev"));
        sizePolicy1.setHeightForWidth(Prev->sizePolicy().hasHeightForWidth());
        Prev->setSizePolicy(sizePolicy1);
        Prev->setMinimumSize(QSize(20, 30));
        Prev->setFont(font3);
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("go-previous")));
        Prev->setIcon(icon2);

        Navegation->addWidget(Prev);

        Next = new QPushButton(horizontalLayoutWidget_2);
        Next->setObjectName(QString::fromUtf8("Next"));
        sizePolicy1.setHeightForWidth(Next->sizePolicy().hasHeightForWidth());
        Next->setSizePolicy(sizePolicy1);
        Next->setMinimumSize(QSize(20, 30));
        Next->setFont(font3);
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("go-next")));
        Next->setIcon(icon3);

        Navegation->addWidget(Next);


        horizontalLayout->addLayout(Navegation);

        gui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1662, 31));
        menubar->setFont(font);
        menuLoad_Image = new QMenu(menubar);
        menuLoad_Image->setObjectName(QString::fromUtf8("menuLoad_Image"));
        menuLoad_Image->setFont(font3);
        menuLoad_Image->setTearOffEnabled(false);
        menuLoad_Image->setSeparatorsCollapsible(false);
        gui->setMenuBar(menubar);
        statusbar = new QStatusBar(gui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gui->setStatusBar(statusbar);

        menubar->addAction(menuLoad_Image->menuAction());
        menuLoad_Image->addAction(OpenImage);
        menuLoad_Image->addAction(CloseImage);
        menuLoad_Image->addAction(ImportCSV);
        menuLoad_Image->addAction(CloseCSV);
        menuLoad_Image->addAction(ImportDataset);
        menuLoad_Image->addAction(CloseDataset);

        retranslateUi(gui);

        TabbedImageViewer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QMainWindow *gui)
    {
        gui->setWindowTitle(QCoreApplication::translate("gui", "gui", nullptr));
        OpenImage->setText(QCoreApplication::translate("gui", "Open Image", nullptr));
        CloseImage->setText(QCoreApplication::translate("gui", "Close Image", nullptr));
        ImportCSV->setText(QCoreApplication::translate("gui", "Import CSV", nullptr));
        ImportDataset->setText(QCoreApplication::translate("gui", "Import Dataset", nullptr));
        CloseCSV->setText(QCoreApplication::translate("gui", "Close CSV", nullptr));
        CloseDataset->setText(QCoreApplication::translate("gui", "Close Dataset", nullptr));
        TabbedImageViewer->setTabText(TabbedImageViewer->indexOf(Original), QCoreApplication::translate("gui", "Original", nullptr));
        TabbedImageViewer->setTabText(TabbedImageViewer->indexOf(Grayscale), QCoreApplication::translate("gui", "Grayscale", nullptr));
        ViewerSize->setText(QCoreApplication::translate("gui", "Width X Height", nullptr));
        ViewerPath->setText(QCoreApplication::translate("gui", "Image path", nullptr));
        HuGray_label->setText(QCoreApplication::translate("gui", "Grayscale", nullptr));
        HuG_01_val->setText(QString());
        HuG_02->setText(QCoreApplication::translate("gui", "2", nullptr));
        HuG_05->setText(QCoreApplication::translate("gui", "5", nullptr));
        HuG_06->setText(QCoreApplication::translate("gui", "6", nullptr));
        HuG_01->setText(QCoreApplication::translate("gui", "1", nullptr));
        HuG_04->setText(QCoreApplication::translate("gui", "4", nullptr));
        HuG_03->setText(QCoreApplication::translate("gui", "3", nullptr));
        HuG_07->setText(QCoreApplication::translate("gui", "7", nullptr));
        HuG_02_val->setText(QString());
        HuG_03_val->setText(QString());
        HuG_04_val->setText(QString());
        HuG_05_val->setText(QString());
        HuG_07_val->setText(QString());
        HuG_06_val->setText(QString());
        HuH_label->setText(QCoreApplication::translate("gui", "Channel H", nullptr));
        HuH_04->setText(QCoreApplication::translate("gui", "4", nullptr));
        HuH_06_val->setText(QString());
        HuH_01->setText(QCoreApplication::translate("gui", "1", nullptr));
        HuH_02_val->setText(QString());
        HuH_02->setText(QCoreApplication::translate("gui", "2", nullptr));
        HuH_05_val->setText(QString());
        HuH_04_val->setText(QString());
        HuH_03_val->setText(QString());
        HuH_03->setText(QCoreApplication::translate("gui", "3", nullptr));
        HuH_05->setText(QCoreApplication::translate("gui", "5", nullptr));
        HuH_06->setText(QCoreApplication::translate("gui", "6", nullptr));
        HuH_07_val->setText(QString());
        HuH_01_val->setText(QString());
        HuH_07->setText(QCoreApplication::translate("gui", "7", nullptr));
        HuS_label->setText(QCoreApplication::translate("gui", "Channel S", nullptr));
        HuS_01_val->setText(QString());
        HuS_02->setText(QCoreApplication::translate("gui", "2", nullptr));
        HuS_05->setText(QCoreApplication::translate("gui", "5", nullptr));
        HuS_06->setText(QCoreApplication::translate("gui", "6", nullptr));
        HuS_01->setText(QCoreApplication::translate("gui", "1", nullptr));
        HuS_04->setText(QCoreApplication::translate("gui", "4", nullptr));
        HuS_03->setText(QCoreApplication::translate("gui", "3", nullptr));
        HuS_07->setText(QCoreApplication::translate("gui", "7", nullptr));
        HuS_02_val->setText(QString());
        HuS_03_val->setText(QString());
        HuS_04_val->setText(QString());
        HuS_05_val->setText(QString());
        HuS_07_val->setText(QString());
        HuS_06_val->setText(QString());
        HuV_label->setText(QCoreApplication::translate("gui", "Channel V", nullptr));
        HuV_01_val->setText(QString());
        HuV_02->setText(QCoreApplication::translate("gui", "2", nullptr));
        HuV_05->setText(QCoreApplication::translate("gui", "5", nullptr));
        HuV_06->setText(QCoreApplication::translate("gui", "6", nullptr));
        HuV_01->setText(QCoreApplication::translate("gui", "1", nullptr));
        HuV_04->setText(QCoreApplication::translate("gui", "4", nullptr));
        HuV_03->setText(QCoreApplication::translate("gui", "3", nullptr));
        HuV_07->setText(QCoreApplication::translate("gui", "7", nullptr));
        HuV_02_val->setText(QString());
        HuV_03_val->setText(QString());
        HuV_04_val->setText(QString());
        HuV_05_val->setText(QString());
        HuV_07_val->setText(QString());
        HuV_06_val->setText(QString());
        HsvHistogramLabel->setText(QCoreApplication::translate("gui", "HSV HISTOGRAM", nullptr));
        HsvHistogramViewer->setText(QString());
        GrayscaleHistogramLabel->setText(QCoreApplication::translate("gui", "GRAYSCALE HISTOGRAM", nullptr));
        GrayscaleHistogramViewer->setText(QString());
        HaralickDescriptors_label_01->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (01x01)", nullptr));
        CoOcurrenceMatrix_01->setText(QString());
        Homogeneity_01_val->setText(QString());
        Entropy_01->setText(QCoreApplication::translate("gui", "Entropy:", nullptr));
        Homogeneity_01->setText(QCoreApplication::translate("gui", "Homogeneity:", nullptr));
        Entropy_01_val->setText(QString());
        Contras_01->setText(QCoreApplication::translate("gui", "Contrast:", nullptr));
        Contrast_01_val->setText(QString());
        HaralickDescriptors_label_02->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (02x02)", nullptr));
        CoOcurrenceMatrix_02->setText(QString());
        Homogeneity_02_val->setText(QString());
        Entropy_02->setText(QCoreApplication::translate("gui", "Entropy:", nullptr));
        Homogeneity_02->setText(QCoreApplication::translate("gui", "Homogeneity:", nullptr));
        Entropy_02_val->setText(QString());
        Contras_02->setText(QCoreApplication::translate("gui", "Contrast:", nullptr));
        Contrast_02_val->setText(QString());
        HaralickDescriptors_label_04->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (04x04)", nullptr));
        CoOcurrenceMatrix_04->setText(QString());
        Homogeneity_04_val->setText(QString());
        Entropy_04_val->setText(QString());
        Contras_04->setText(QCoreApplication::translate("gui", "Contrast:", nullptr));
        Entropy_04->setText(QCoreApplication::translate("gui", "Entropy:", nullptr));
        Contrast_04_val->setText(QString());
        Homogeneity_04->setText(QCoreApplication::translate("gui", "Homogeneity:", nullptr));
        HaralickDescriptors_label_08->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (08x08)", nullptr));
        CoOcurrenceMatrix_08->setText(QString());
        Homogeneity_08_val->setText(QString());
        Entropy_08->setText(QCoreApplication::translate("gui", "Entropy:", nullptr));
        Homogeneity_08->setText(QCoreApplication::translate("gui", "Homogeneity:", nullptr));
        Entropy_08_val->setText(QString());
        Contras_08->setText(QCoreApplication::translate("gui", "Contrast:", nullptr));
        Contrast_08_val->setText(QString());
        HaralickDescriptors_label_16->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (16x16)", nullptr));
        CoOcurrenceMatrix_16->setText(QString());
        Homogeneity_16_val->setText(QString());
        Entropy_16->setText(QCoreApplication::translate("gui", "Entropy:", nullptr));
        Homogeneity_16->setText(QCoreApplication::translate("gui", "Homogeneity:", nullptr));
        Entropy_16_val->setText(QString());
        Contras_16->setText(QCoreApplication::translate("gui", "Contrast:", nullptr));
        Contrast_16_val->setText(QString());
        HaralickDescriptors_label_32->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (32x32)", nullptr));
        CoOcurrenceMatrix_32->setText(QString());
        Homogeneity_32_val->setText(QString());
        Entropy_32->setText(QCoreApplication::translate("gui", "Entropy:", nullptr));
        Homogeneity_32->setText(QCoreApplication::translate("gui", "Homogeneity:", nullptr));
        Entropy_32_val->setText(QString());
        Contras_32->setText(QCoreApplication::translate("gui", "Contrast:", nullptr));
        Contrast_32_val->setText(QString());
        StartButton->setText(QCoreApplication::translate("gui", "START", nullptr));
        ZoomInButton->setText(QCoreApplication::translate("gui", "Zoom In", nullptr));
        ZoomOutButton->setText(QCoreApplication::translate("gui", "Zoom Out", nullptr));
        Prev->setText(QCoreApplication::translate("gui", "Prev", nullptr));
        Next->setText(QCoreApplication::translate("gui", "Next", nullptr));
        menuLoad_Image->setTitle(QCoreApplication::translate("gui", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
