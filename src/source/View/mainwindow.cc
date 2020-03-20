#include "View/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _facade = new Facade();
    ui->widget->setFacade(_facade);
}

MainWindow::~MainWindow()
{
    delete ui;
}
