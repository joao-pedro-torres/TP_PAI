#include "xgboostwindow.h"
#include "ui_xgboostwindow.h"

XGBoostWindow::XGBoostWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::XGBoostWindow) {
    ui->setupUi(this);
}

XGBoostWindow::~XGBoostWindow() {
    delete ui;
}
