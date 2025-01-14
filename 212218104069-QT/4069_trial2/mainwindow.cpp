#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(on_chkbx_clicked()));
       connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(on_chkbx_clicked()));
       connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(on_chkbx_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_chkbx_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Option 1 is checked ";
    }
    else
    {
        stream<<"Option 1 is unchecked ";
    }
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Option 2 is checked ";
    }
    else
    {
        stream<<"Option 2 is unchecked ";
    }
    if(ui->checkBox_3->isChecked())
    {
        stream<<"Option 3 is checked ";
    }
    else
    {
        stream<<"Option 3 is unchecked ";
    }

}
