#include "mainwindow.h"

#include <QApplication>
#include <QString>

class Ingredient {
public:
    virtual QString getInfo() const = 0;

};

class Vegetable : public Ingredient {
public:
    QString getInfo() const override {
        return "This is a vegetable.";
    }
};

class Fruit : public Ingredient {
public:
    QString getInfo() const override {
        return "This is a fruit.";
    }
};

class Grain : public Ingredient {
public:
    QString getInfo() const override {
        return "This is a grain.";
    }



};

template<typename T>
class Measurement {
public:
    Measurement(T value, QString unit)
        : m_value(value), m_unit(unit)
    {
    }

    T getValue() const {
        return m_value;
    }

    QString getUnit() const {
        return m_unit;
    }

private:
    T m_value;
    QString m_unit;
};


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();




}
