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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QTableWidget *TableHu_G;
    QTableWidget *TableHu_H;
    QTableWidget *TableHu_S;
    QTableWidget *TableHu_V;
    QLabel *HsvHistogramLabel;
    QLabel *HsvHistogramViewer;
    QLabel *GrayscaleHistogramLabel;
    QLabel *GrayscaleHistogramViewer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *HaralickDescriptors;
    QLabel *HaralickDescriptors_label_01;
    QHBoxLayout *HaralickDescriptorsView_01;
    QLabel *CoOcurrenceMatrix_01;
    QTableWidget *TableHaralick01;
    QLabel *HaralickDescriptors_label_02;
    QHBoxLayout *HaralickDescriptorsView_02;
    QLabel *CoOcurrenceMatrix_02;
    QTableWidget *TableHaralick02;
    QLabel *HaralickDescriptors_label_04;
    QHBoxLayout *HaralickDescriptorsView_04;
    QLabel *CoOcurrenceMatrix_04;
    QTableWidget *TableHaralick04;
    QLabel *HaralickDescriptors_label_08;
    QHBoxLayout *HaralickDescriptorsView_08;
    QLabel *CoOcurrenceMatrix_08;
    QTableWidget *TableHaralick08;
    QLabel *HaralickDescriptors_label_16;
    QHBoxLayout *HaralickDescriptorsView_16;
    QLabel *CoOcurrenceMatrix_16;
    QTableWidget *TableHaralick16;
    QLabel *HaralickDescriptors_label_32;
    QHBoxLayout *HaralickDescriptorsView_32;
    QLabel *CoOcurrenceMatrix_32;
    QTableWidget *TableHaralick32;
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
        ViewerSize->setGeometry(QRect(10, 737, 161, 20));
        ViewerSize->setStyleSheet(QString::fromUtf8("font: 9pt \"Noto Sans\";\n"
"background-color: palete(window);"));
        ViewerSize->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        ViewerPath = new QLabel(centralwidget);
        ViewerPath->setObjectName(QString::fromUtf8("ViewerPath"));
        ViewerPath->setGeometry(QRect(10, 717, 651, 20));
        ViewerPath->setStyleSheet(QString::fromUtf8("font: 9pt \"Noto Sans\";\n"
"background-color: palete(window);"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(700, 10, 482, 701));
        Graphics = new QVBoxLayout(verticalLayoutWidget_2);
        Graphics->setObjectName(QString::fromUtf8("Graphics"));
        Graphics->setContentsMargins(0, 0, 0, 0);
        HuMoments = new QHBoxLayout();
        HuMoments->setObjectName(QString::fromUtf8("HuMoments"));
        TableHu_G = new QTableWidget(verticalLayoutWidget_2);
        if (TableHu_G->columnCount() < 1)
            TableHu_G->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TableHu_G->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (TableHu_G->rowCount() < 7)
            TableHu_G->setRowCount(7);
        TableHu_G->setObjectName(QString::fromUtf8("TableHu_G"));
        TableHu_G->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHu_G->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);

        HuMoments->addWidget(TableHu_G);

        TableHu_H = new QTableWidget(verticalLayoutWidget_2);
        if (TableHu_H->columnCount() < 1)
            TableHu_H->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TableHu_H->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        if (TableHu_H->rowCount() < 7)
            TableHu_H->setRowCount(7);
        TableHu_H->setObjectName(QString::fromUtf8("TableHu_H"));
        TableHu_H->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHu_H->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);

        HuMoments->addWidget(TableHu_H);

        TableHu_S = new QTableWidget(verticalLayoutWidget_2);
        if (TableHu_S->columnCount() < 1)
            TableHu_S->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TableHu_S->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        if (TableHu_S->rowCount() < 7)
            TableHu_S->setRowCount(7);
        TableHu_S->setObjectName(QString::fromUtf8("TableHu_S"));
        TableHu_S->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHu_S->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);

        HuMoments->addWidget(TableHu_S);

        TableHu_V = new QTableWidget(verticalLayoutWidget_2);
        if (TableHu_V->columnCount() < 1)
            TableHu_V->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TableHu_V->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        if (TableHu_V->rowCount() < 7)
            TableHu_V->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        TableHu_V->setItem(0, 0, __qtablewidgetitem4);
        TableHu_V->setObjectName(QString::fromUtf8("TableHu_V"));
        TableHu_V->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHu_V->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);

        HuMoments->addWidget(TableHu_V);


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

        TableHaralick01 = new QTableWidget(verticalLayoutWidget);
        if (TableHaralick01->columnCount() < 1)
            TableHaralick01->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TableHaralick01->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        if (TableHaralick01->rowCount() < 3)
            TableHaralick01->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TableHaralick01->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TableHaralick01->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TableHaralick01->setVerticalHeaderItem(2, __qtablewidgetitem8);
        TableHaralick01->setObjectName(QString::fromUtf8("TableHaralick01"));
        TableHaralick01->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHaralick01->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TableHaralick01->horizontalHeader()->setVisible(false);

        HaralickDescriptorsView_01->addWidget(TableHaralick01);


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

        TableHaralick02 = new QTableWidget(verticalLayoutWidget);
        if (TableHaralick02->columnCount() < 1)
            TableHaralick02->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TableHaralick02->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        if (TableHaralick02->rowCount() < 3)
            TableHaralick02->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        TableHaralick02->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        TableHaralick02->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        TableHaralick02->setVerticalHeaderItem(2, __qtablewidgetitem12);
        TableHaralick02->setObjectName(QString::fromUtf8("TableHaralick02"));
        TableHaralick02->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHaralick02->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TableHaralick02->horizontalHeader()->setVisible(false);

        HaralickDescriptorsView_02->addWidget(TableHaralick02);


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

        TableHaralick04 = new QTableWidget(verticalLayoutWidget);
        if (TableHaralick04->columnCount() < 1)
            TableHaralick04->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        TableHaralick04->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        if (TableHaralick04->rowCount() < 3)
            TableHaralick04->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        TableHaralick04->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        TableHaralick04->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        TableHaralick04->setVerticalHeaderItem(2, __qtablewidgetitem16);
        TableHaralick04->setObjectName(QString::fromUtf8("TableHaralick04"));
        TableHaralick04->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHaralick04->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TableHaralick04->horizontalHeader()->setVisible(false);

        HaralickDescriptorsView_04->addWidget(TableHaralick04);


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

        TableHaralick08 = new QTableWidget(verticalLayoutWidget);
        if (TableHaralick08->columnCount() < 1)
            TableHaralick08->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        TableHaralick08->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        if (TableHaralick08->rowCount() < 3)
            TableHaralick08->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        TableHaralick08->setVerticalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        TableHaralick08->setVerticalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        TableHaralick08->setVerticalHeaderItem(2, __qtablewidgetitem20);
        TableHaralick08->setObjectName(QString::fromUtf8("TableHaralick08"));
        TableHaralick08->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHaralick08->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TableHaralick08->horizontalHeader()->setVisible(false);

        HaralickDescriptorsView_08->addWidget(TableHaralick08);


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

        TableHaralick16 = new QTableWidget(verticalLayoutWidget);
        if (TableHaralick16->columnCount() < 1)
            TableHaralick16->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        TableHaralick16->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        if (TableHaralick16->rowCount() < 3)
            TableHaralick16->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        TableHaralick16->setVerticalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        TableHaralick16->setVerticalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        TableHaralick16->setVerticalHeaderItem(2, __qtablewidgetitem24);
        TableHaralick16->setObjectName(QString::fromUtf8("TableHaralick16"));
        TableHaralick16->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHaralick16->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TableHaralick16->horizontalHeader()->setVisible(false);

        HaralickDescriptorsView_16->addWidget(TableHaralick16);


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

        TableHaralick32 = new QTableWidget(verticalLayoutWidget);
        if (TableHaralick32->columnCount() < 1)
            TableHaralick32->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        TableHaralick32->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        if (TableHaralick32->rowCount() < 3)
            TableHaralick32->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        TableHaralick32->setVerticalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        TableHaralick32->setVerticalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        TableHaralick32->setVerticalHeaderItem(2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        TableHaralick32->setItem(0, 0, __qtablewidgetitem29);
        TableHaralick32->setObjectName(QString::fromUtf8("TableHaralick32"));
        TableHaralick32->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TableHaralick32->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TableHaralick32->horizontalHeader()->setVisible(false);

        HaralickDescriptorsView_32->addWidget(TableHaralick32);


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
        QFont font1;
        font1.setPointSize(12);
        ImageFolders->setFont(font1);

        horizontalLayout->addWidget(ImageFolders);

        Navegation = new QHBoxLayout();
        Navegation->setObjectName(QString::fromUtf8("Navegation"));
        Zoom = new QHBoxLayout();
        Zoom->setObjectName(QString::fromUtf8("Zoom"));
        StartButton = new QPushButton(horizontalLayoutWidget_2);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setMinimumSize(QSize(0, 30));
        StartButton->setFont(font1);
        StartButton->setStyleSheet(QString::fromUtf8("background-color: green"));

        Zoom->addWidget(StartButton);

        ZoomInButton = new QPushButton(horizontalLayoutWidget_2);
        ZoomInButton->setObjectName(QString::fromUtf8("ZoomInButton"));
        sizePolicy2.setHeightForWidth(ZoomInButton->sizePolicy().hasHeightForWidth());
        ZoomInButton->setSizePolicy(sizePolicy2);
        ZoomInButton->setMinimumSize(QSize(0, 30));
        ZoomInButton->setFont(font1);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("zoom-in")));
        ZoomInButton->setIcon(icon);

        Zoom->addWidget(ZoomInButton);

        ZoomOutButton = new QPushButton(horizontalLayoutWidget_2);
        ZoomOutButton->setObjectName(QString::fromUtf8("ZoomOutButton"));
        sizePolicy2.setHeightForWidth(ZoomOutButton->sizePolicy().hasHeightForWidth());
        ZoomOutButton->setSizePolicy(sizePolicy2);
        ZoomOutButton->setMinimumSize(QSize(0, 30));
        ZoomOutButton->setFont(font1);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("zoom-out")));
        ZoomOutButton->setIcon(icon1);

        Zoom->addWidget(ZoomOutButton);


        Navegation->addLayout(Zoom);

        Prev = new QPushButton(horizontalLayoutWidget_2);
        Prev->setObjectName(QString::fromUtf8("Prev"));
        sizePolicy1.setHeightForWidth(Prev->sizePolicy().hasHeightForWidth());
        Prev->setSizePolicy(sizePolicy1);
        Prev->setMinimumSize(QSize(20, 30));
        Prev->setFont(font1);
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("go-previous")));
        Prev->setIcon(icon2);

        Navegation->addWidget(Prev);

        Next = new QPushButton(horizontalLayoutWidget_2);
        Next->setObjectName(QString::fromUtf8("Next"));
        sizePolicy1.setHeightForWidth(Next->sizePolicy().hasHeightForWidth());
        Next->setSizePolicy(sizePolicy1);
        Next->setMinimumSize(QSize(20, 30));
        Next->setFont(font1);
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
        menuLoad_Image->setFont(font1);
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
        QTableWidgetItem *___qtablewidgetitem = TableHu_G->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("gui", "Channel G", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableHu_H->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("gui", "Channel H", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TableHu_S->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("gui", "Channel S", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TableHu_V->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("gui", "Channel V", nullptr));

        const bool __sortingEnabled = TableHu_V->isSortingEnabled();
        TableHu_V->setSortingEnabled(false);
        TableHu_V->setSortingEnabled(__sortingEnabled);

        HsvHistogramLabel->setText(QCoreApplication::translate("gui", "HSV HISTOGRAM", nullptr));
        HsvHistogramViewer->setText(QString());
        GrayscaleHistogramLabel->setText(QCoreApplication::translate("gui", "GRAYSCALE HISTOGRAM", nullptr));
        GrayscaleHistogramViewer->setText(QString());
        HaralickDescriptors_label_01->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (01x01)", nullptr));
        CoOcurrenceMatrix_01->setText(QString());
        QTableWidgetItem *___qtablewidgetitem4 = TableHaralick01->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("gui", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TableHaralick01->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("gui", "Entropy", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TableHaralick01->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("gui", "Homogeneity", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TableHaralick01->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("gui", "Constrast", nullptr));
        HaralickDescriptors_label_02->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (02x02)", nullptr));
        CoOcurrenceMatrix_02->setText(QString());
        QTableWidgetItem *___qtablewidgetitem8 = TableHaralick02->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("gui", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TableHaralick02->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("gui", "Entropy", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = TableHaralick02->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("gui", "Homogeneity", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = TableHaralick02->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("gui", "Constrast", nullptr));
        HaralickDescriptors_label_04->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (04x04)", nullptr));
        CoOcurrenceMatrix_04->setText(QString());
        QTableWidgetItem *___qtablewidgetitem12 = TableHaralick04->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("gui", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = TableHaralick04->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("gui", "Entropy", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = TableHaralick04->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("gui", "Homogeneity", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = TableHaralick04->verticalHeaderItem(2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("gui", "Constrast", nullptr));
        HaralickDescriptors_label_08->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (08x08)", nullptr));
        CoOcurrenceMatrix_08->setText(QString());
        QTableWidgetItem *___qtablewidgetitem16 = TableHaralick08->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("gui", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = TableHaralick08->verticalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("gui", "Entropy", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = TableHaralick08->verticalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("gui", "Homogeneity", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = TableHaralick08->verticalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("gui", "Constrast", nullptr));
        HaralickDescriptors_label_16->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (16x16)", nullptr));
        CoOcurrenceMatrix_16->setText(QString());
        QTableWidgetItem *___qtablewidgetitem20 = TableHaralick16->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("gui", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = TableHaralick16->verticalHeaderItem(0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("gui", "Entropy", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = TableHaralick16->verticalHeaderItem(1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("gui", "Homogeneity", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = TableHaralick16->verticalHeaderItem(2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("gui", "Constrast", nullptr));
        HaralickDescriptors_label_32->setText(QCoreApplication::translate("gui", "Co-ocurrence Matrix (32x32)", nullptr));
        CoOcurrenceMatrix_32->setText(QString());
        QTableWidgetItem *___qtablewidgetitem24 = TableHaralick32->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("gui", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = TableHaralick32->verticalHeaderItem(0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("gui", "Entropy", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = TableHaralick32->verticalHeaderItem(1);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("gui", "Homogeneity", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = TableHaralick32->verticalHeaderItem(2);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("gui", "Constrast", nullptr));

        const bool __sortingEnabled1 = TableHaralick32->isSortingEnabled();
        TableHaralick32->setSortingEnabled(false);
        TableHaralick32->setSortingEnabled(__sortingEnabled1);

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
