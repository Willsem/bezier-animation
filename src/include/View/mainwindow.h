#ifndef __MAINWINDOW_H
#define __MAINWINDOW_H

#include <QMainWindow>
#include <QVector2D>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT;

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow* ui;
};

#endif // __MAINWINDOW_H
