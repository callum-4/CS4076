#ifndef NEWRECIPEWINDOW_H
#define NEWRECIPEWINDOW_H

#include <QDialog>
#include <QLineEdit>
#include <QSlider>
namespace Ui {
class newRecipeWindow;
}

class newRecipeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit newRecipeWindow(QWidget *parent = nullptr);
    ~newRecipeWindow();

private slots:
    // // the buttons slots in new recipe window ui
    void on_addMethod_clicked();

    void on_calorieSlider_actionTriggered(int action);

    void on_saveRecipe_clicked();

private:
    Ui::newRecipeWindow *ui;
    QSlider *calorieSlider ;
    QLineEdit *calorieLine ;
    //stringlist made here

    QStringList method ;


};

#endif // NEWRECIPEWINDOW_H
