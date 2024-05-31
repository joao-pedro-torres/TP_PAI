#include "effnetwindow.h"
#include "ui_effnetwindow.h"

EffNetWindow::EffNetWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::EffNetWindow) {
    ui->setupUi(this);
}

EffNetWindow::~EffNetWindow() {
    delete ui;
}
