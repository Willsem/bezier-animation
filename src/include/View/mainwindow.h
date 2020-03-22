#ifndef __MAINWINDOW_H
#define __MAINWINDOW_H

#include <QMainWindow>
#include <QVector2D>
#include <QTimer>
#include "Commands/Move.h"

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

private slots:
    void clickStartAnimation();
    void moveIteration();

private:
    Ui::MainWindow* ui;
    Facade *_facade;

    BrownStages _leftPrev = BrownStages::NORMALLEFT;
    BrownStages _rightPrev = BrownStages::NORMALRIGHT;

    QTimer *timer;
    Move move;
};

#endif // __MAINWINDOW_H
