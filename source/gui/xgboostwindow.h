#ifndef XGBOOSTWINDOW_H
#define XGBOOSTWINDOW_H

#include <QMainWindow>

namespace Ui {
class XGBoostWindow;
}

class XGBoostWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit XGBoostWindow(QWidget *parent = nullptr);
    ~XGBoostWindow();

private:
    Ui::XGBoostWindow *ui;
};

#endif // XGBOOSTWINDOW_H
