#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "recipe.h"
#include "global.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //friend class declared
    friend class newrecipewindow;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static std::vector<Recipe*> recipes_;

private slots:

    // the buttons slots in mainwindow ui
    void on_actionAbout_2_triggered();

    void on_actionAbout_triggered();

    void on_actionExit_triggered();

    void on_actionNew_Recipe_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
