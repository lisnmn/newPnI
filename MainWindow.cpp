#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    mpMidwareMainWindow.initMidware(ui->subDialogInterface);
    mpMidwareMainWindow.showSubForm("Sample");
}

MainWindow::~MainWindow()
{
    delete ui;
}

