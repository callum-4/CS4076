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
    void on_addIngredient_clicked();

    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_addMethod_clicked();

    void on_calorieSlider_actionTriggered(int action);

    void on_veganBox_clicked();

    void on_veggieBox_clicked();

    void on_pescaBox_clicked();

    void on_addCalorie_clicked();

private:
    Ui::newRecipeWindow *ui;
    QSlider *calorieSlider ;
    QLineEdit *calorieLine ;
    QStringList method ;
};

#endif // NEWRECIPEWINDOW_H
