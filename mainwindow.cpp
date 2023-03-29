#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QProcess>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include "newRecipeWindow.h"
#include <QPixmap>

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
                                     "To use Measurement class: 1. Measurement<float/double> item(value, measurement); ((e.g sugar(100.0, cu))) ");
}


void MainWindow::on_actionNew_Recipe_triggered()
{
    newRecipeWindow newrecipe;
    newrecipe.setModal(true);
    newrecipe.exec();
}

