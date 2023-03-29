#ifndef NEWRECIPEWINDOW_H
#define NEWRECIPEWINDOW_H

#include <QDialog>

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

private:
    Ui::newRecipeWindow *ui;
};

#endif // NEWRECIPEWINDOW_H
