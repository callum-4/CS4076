#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QProcess>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include "newRecipeWindow.h"
#include <QPixmap>
#include "recipe.h"
#include "global.h"
std::vector<Recipe*> MainWindow::recipes_;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //sample recipes made

    recipes_.push_back(new Recipe("Big Mac", "700 calories", "hard", "flip dat burger, toast bun, slap it on", false, false, false));
    recipes_.push_back(new Recipe("Spaghetti", "500 calories", "medium", "cook pasta, make sauce, combine", true, false, true));
    recipes_.push_back(new Recipe("Vegan Salad", "300 calories", "easy", "chop vegetables, add dressing", true, true, true));

    //setting up the mainwindow ui to display the info
    QListWidget *nameListWidget = ui->nameList;
    for (const auto& recipe : recipes_) {
        ui->nameList->addItem(recipe->getName());

        ui->nameList->addItem(recipe->getCalories());
        ui->nameList->addItem(recipe->getDifficulty());
        if (recipe->getIsVeggie() == true){
            ui->nameList->addItem("Vegetarian");
        }
        if (recipe->getIsVegan() == true){
            ui->nameList->addItem("Vegan");
        }
        if (recipe->getIsPesca() == true){
            ui->nameList->addItem("Pescatarian");
        }
        ui->nameList->addItem(" ");



    }

    QListWidget *descListWidget = ui->descriptionList;
    for (const auto& recipe : recipes_) {
        ui->descriptionList->addItem(recipe->getSteps());
        ui->descriptionList->addItem(" ");
    }


}

MainWindow::~MainWindow()
{
    delete ui;

}




//exit button
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

//about button
void MainWindow::on_actionAbout_2_triggered()
{
    QMessageBox::about(this, "About", "This is a GUI designed by Callum Quinn to be utitilised to create and store recipes with ease") ;
}

//help button
void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "Help", "If any help is needed, contact the creator at (redacted).com or view the qt documentation online");
}

//display second window button
void MainWindow::on_actionNew_Recipe_triggered()
{
    newRecipeWindow newrecipe;
    newrecipe.setModal(true);
    newrecipe.exec();
}

//button to display updated recipes
void MainWindow::on_pushButton_clicked()
{
    ui->nameList->clear();
    ui->descriptionList->clear();
    for(int i = 0; i < recipes_.size(); i++){
            ui->nameList->addItem(recipes_.at(i)->getName());
            ui->nameList->addItem(recipes_.at(i)->getCalories());
            ui->nameList->addItem(recipes_.at(i)->getDifficulty());
            if (recipes_.at(i)->getIsVeggie() == true){
                ui->nameList->addItem("Vegetarian");
            }
            if (recipes_.at(i)->getIsVegan() == true){
                ui->nameList->addItem("Vegan");
            }
            if (recipes_.at(i)->getIsPesca() == true){
                ui->nameList->addItem("Pescatarian");
            }
            ui->nameList->addItem(" ");
            ui->descriptionList->addItem(recipes_.at(i)->getSteps());
            ui->descriptionList->addItem(" ");
    }





}












