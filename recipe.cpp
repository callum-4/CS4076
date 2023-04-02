#include "recipe.h"

#include "ui_newrecipewindow.h"
#include <QString>
#include <QListWidget>




    Recipe::Recipe(const QString &name, const QString &calories, const QString &difficulty, const QString &steps, bool isVeggie, bool isVegan, bool isPesca)
        : name(name),  calories(calories), difficulty(difficulty), steps(steps), isVeggie_(isVeggie), isVegan_(isVegan), isPesca_(isPesca){}

QString Recipe::getName() const {
    return name;
}

void Recipe::setName(const QString &name) {
    this->name = name;
}

QString Recipe::getCalories() const {
    return calories;
}

void Recipe::setCalories(const QString &calories) {
    this->calories = calories;
}

QString Recipe::getDifficulty() const {
    return difficulty;
}

void Recipe::setDifficulty(const QString &difficulty) {
    this->difficulty = difficulty;
}

QString Recipe::getSteps() const {
    return steps;
}

void Recipe::setSteps(const QString &steps) {
    this->steps = steps;

}

bool Recipe::isVeggie() const
{
    return isVeggie_;
}

void Recipe::setisVeggie(bool isVeggie)
{
    isVeggie_ = isVeggie;
}

bool Recipe::isVegan() const
{
    return isVegan_;
}

void Recipe::setisVegan(bool isVegan)
{
    isVegan_ = isVegan;
}

bool Recipe::isPesca() const
{
    return isPesca_;
}

void Recipe::setisPesca(bool isPesca)
{
    isPesca_ = isPesca;
}
