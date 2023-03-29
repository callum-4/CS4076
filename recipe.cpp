#include "recipe.h"
#include <QString>
Recipe::Recipe(const QString &name, const QString &description, int calories, const QString &difficulty)
    : name(name), description(description), calories(calories), difficulty(difficulty) {}

QString Recipe::getName() const {
    return name;
}

void Recipe::setName(const QString &name) {
    this->name = name;
}

QString Recipe::getDescription() const {
    return description;
}

void Recipe::setDescription(const QString &description) {
    this->description = description;
}

int Recipe::getCalories() const {
    return calories;
}

void Recipe::setCalories(int calories) {
    this->calories = calories;
}

QString Recipe::getDifficulty() const{
    return difficulty;
}

void Recipe::setDifficulty(const QString &difficulty){
    this->difficulty = difficulty;
}

