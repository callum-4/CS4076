#include "newrecipewindow.h"
#include "ui_newrecipewindow.h"
#include <QListWidget>
#include <QTextStream>
#include <QLineEdit>
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
     QStringList method= {""} ;

    QString methodStep = ui->enterMethod->text();

    method << methodStep ;

    methodListWidget->addItems(method);

}

