#include "newrecipewindow.h"
#include "ui_newrecipewindow.h"
#include "global.cpp"
#include <QListWidget>
#include <QTextStream>
#include <QLineEdit>
#include <QSlider>
#include <QDebug>
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



void newRecipeWindow::on_addIngredient_clicked()

{

    QListWidget *ingredientListWidget = this->findChild<QListWidget*>("ingredientList");
     QStringList food= {""} ;

    QString ingredient = ui->enterIngredient->text();

    food << ingredient ;

    ingredientListWidget->addItems(food);

}





void newRecipeWindow::on_addMethod_clicked()
{

    QListWidget *methodListWidget = this->findChild<QListWidget*>("methodList");


    QString methodStep = ui->enterMethod->text();
    QStringList method ;
    method << methodStep ;

    methodListWidget->addItems(method);

}








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






void newRecipeWindow::on_veganBox_clicked()
{
    QListWidget *methodListWidget = this->findChild<QListWidget*>("methodList");
      QString vegan = ui->veganBox->text();
       if(ui->veganBox->isChecked())
       {

           ui->methodList->addItem(vegan);
       }
       else
       {       QList<QListWidgetItem *> items = ui->methodList->findItems(vegan, Qt::MatchExactly);
           for(int i = 0; i < items.size(); i++)
           {
               delete ui->methodList->takeItem(ui->methodList->row(items[i]));
           }
       }


}




void newRecipeWindow::on_veggieBox_clicked()
{
    QListWidget *methodListWidget1 = this->findChild<QListWidget*>("methodList");
      QString veggie = ui->veggieBox->text();
       if(ui->veggieBox->isChecked())
       {

           ui->methodList->addItem(veggie);
       }
       else
       {       QList<QListWidgetItem *> items = ui->methodList->findItems(veggie, Qt::MatchExactly);
           for(int i = 0; i < items.size(); i++)
           {
               delete ui->methodList->takeItem(ui->methodList->row(items[i]));
           }
       }
}






void newRecipeWindow::on_pescaBox_clicked()
{
    QListWidget *methodListWidget2 = this->findChild<QListWidget*>("methodList");
      QString pesca = ui->pescaBox->text();
       if(ui->pescaBox->isChecked())
       {

           ui->methodList->addItem(pesca);
       }
       else
       {       QList<QListWidgetItem *> items = ui->methodList->findItems(pesca, Qt::MatchExactly);
           for(int i = 0; i < items.size(); i++)
           {
               delete ui->methodList->takeItem(ui->methodList->row(items[i]));
           }
       }

}


void newRecipeWindow::on_addCalorie_clicked()
{
    QListWidget *methodListWidget3 = this->findChild<QListWidget*>("methodList");
    QLineEdit    *calorieLine1 = this->findChild<QLineEdit*>("calorieLine");

    QString calorie = ui->calorieLine->text();
    QStringList method ;
    method << calorie ;

    methodListWidget3->addItems(method);






}

