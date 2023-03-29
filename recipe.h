#ifndef RECIPE_H
#define RECIPE_H
#include <QString>

class Recipe {
public:
    Recipe(const QString &name, const QString &description, int calories, const QString &difficulty);
    QString getName() const;
    void setName(const QString &name);
    QString getDescription() const;
    void setDescription(const QString &description);
    int getCalories() const;
    void setCalories(int calories);
    QString getDifficulty() const;
    void setDifficulty(const QString &difficulty);

private:
    QString name;
    QString description;
    int calories;
    QString difficulty;
};

#endif // RECIPE_H
