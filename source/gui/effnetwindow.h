#ifndef EFFNETWINDOW_H
#define EFFNETWINDOW_H

#include <QMainWindow>

namespace Ui {
class EffNetWindow;
}

class EffNetWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EffNetWindow(QWidget *parent = nullptr);
    ~EffNetWindow();

private:
    Ui::EffNetWindow *ui;
};

#endif // EFFNETWINDOW_H
