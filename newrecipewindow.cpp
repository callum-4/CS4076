#include "newrecipewindow.h"
#include "ui_newrecipewindow.h"
#include "recipe.h"
#include "global.cpp"
#include <QListWidget>
#include <QTextStream>
#include <QLineEdit>
#include <QSlider>
#include <QDebug>
#include "mainwindow.h"
#include "global.h"




newRecipeWindow::newRecipeWindow(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::newRecipeWindow)

{
    ui->setupUi(this);


}




newRecipeWindow::~newRecipeWindow()
{
    delete ui;
}

//code for addmethod button adds method lineedit to listwidget and stringlist for use later
void newRecipeWindow::on_addMethod_clicked()
{

    QListWidget *methodListWidget = this->findChild<QListWidget*>("methodList");


    QString methodStep = ui->enterMethod->text();
    QStringList method ;
    method << methodStep ;

    methodListWidget->addItems(method);


}

//code for slider to work
void newRecipeWindow::on_calorieSlider_actionTriggered(int action)
{
    QSlider *calorieSlider = this->findChild<QSlider*>("calorieSlider");
    QLineEdit    *calorieLine = this->findChild<QLineEdit*>("calorieLine");

        calorieSlider->setMinimum(0);
        calorieSlider->setMaximum(2000);

        connect(ui->calorieSlider, &QSlider::valueChanged, this, [=](int value) {
                ui->calorieLine->setText(QString::number(value));
            });
}

//code for save recipe
void newRecipeWindow::on_saveRecipe_clicked()
{



        bool isVegan = ui->veganBox->isChecked();
        bool isVeggie = ui->veggieBox->isChecked();
        bool isPesca = ui->pescaBox->isChecked();



        QString calories = ui->calorieLine->text() + " calories";


        QString difficulty;
        if (ui->easyButton->isChecked()) {
            difficulty = "Easy";
        } else if (ui->mediumButton->isChecked()) {
            difficulty = "Medium";
        } else if (ui->hardButton->isChecked()) {
            difficulty = "Hard";
        } else {
            difficulty = "Unknown";
        }


        QString name = ui->recipeName->text();

        QString steps1 = "";
        for(int i = 0; i < method.size(); i++){

        steps1 += method.at(i);
        steps1+= " ";
        }


        Recipe* myRecipe=new Recipe(name, calories, difficulty, steps1, isVegan, isVeggie, isPesca);
        MainWindow::recipes_.push_back(myRecipe);


        close();






}

