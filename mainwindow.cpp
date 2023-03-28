#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QProcess>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_Project_triggered()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


void MainWindow::on_actionSave_Project_triggered()
{
    /*QString filename= QFileDialog::getSaveFileName(this, "Save As");

      if (filename.isEmpty())
          return;

      QFile file(filename);

    */
}


void MainWindow::on_actionOpen_Project_triggered()
{
    /* if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
           return;

       QTextStream out(&file);

       out << ui->textEdit->toPlainText() << "\n";

       file.close();
    */
}





void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionAbout_2_triggered()
{
    QMessageBox::about(this, "About", "This is a GUI designed by Callum Quinn to be utitilised to create and store recipes with ease") ;
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "Help", "To use Ingredient class: 1. Assign a type(e.g vegetable carrot) 2. QString carrotInfo = carrot.getInfo();"
                                     "To use Measurement class: 1. Measurement<float/double> item(value, measurement); ((e.g sugar(100.0, 'cups')))"
                                     "                          2. float sugarValue = sugar.getValue(); "
                                     "                             QString sugarUnit = sugar.getUnit();  ");
}

