#include "View/mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _facade = new Facade();
    ui->widget->setFacade(_facade);

    QObject::connect(
        ui->startAnimation,
        &QPushButton::clicked,
        this,
        &MainWindow::clickStartAnimation
    );
}

MainWindow::~MainWindow()
{
    delete ui;
    delete _facade;
}

void MainWindow::clickStartAnimation()
{
    BrownStages leftStart = _leftPrev;
    BrownStages rightStart = _rightPrev;
    BrownStages leftEnd;
    BrownStages rightEnd;

    switch (ui->leftComboBox->currentIndex()) {
    case 0:
        leftEnd = BrownStages::NORMALLEFT;
        break;
    case 1:
        leftEnd = BrownStages::UPLEFT;
        break;
    case 2:
        leftEnd = BrownStages::DOWNLEFT;
        break;
    }

    switch (ui->rightComboBox->currentIndex()) {
    case 0:
        rightEnd = BrownStages::NORMALRIGHT;
        break;
    case 1:
        rightEnd = BrownStages::UPRIGHT;
        break;
    case 2:
        rightEnd = BrownStages::DOWNRIGHT;
        break;
    }

    _leftPrev = leftEnd;
    _rightPrev = rightEnd;

    move = Move(leftStart, leftEnd, rightStart, rightEnd, ui->timeAnimationSpin->value());

    ui->startAnimation->setEnabled(false);
    timer = new QTimer();
    timer->setInterval(20);
    connect(timer, SIGNAL(timeout()), this, SLOT(moveIteration()));
    timer->start();
}

void MainWindow::moveIteration()
{
    move.execute(*_facade);
    ui->widget->repaint();

    if (move.isEnd())
    {
        delete timer;
        ui->startAnimation->setEnabled(true);
    }
}
