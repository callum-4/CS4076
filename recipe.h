#ifndef RECIPE_H
#define RECIPE_H



#include <QString>
//recipe class and parameters declared
class Recipe {
public:
    Recipe(const QString &name, const QString &calories, const QString &difficulty, const QString &steps, bool isVeggie, bool isVegan, bool isPesca);

    //getters and setters for recipe
    QString getName() const;
    void setName(const QString &name);

    QString getCalories() const;
    void setCalories(const QString &calories);

    QString getDifficulty() const;
    void setDifficulty(const QString &description);

    QString getSteps() const;
    void setSteps(const QString &steps);

    bool isVeggie() const;
    void setisVeggie(bool isVeggie);
    bool getIsVeggie() const {
            return isVeggie_;
        }

    bool isVegan() const;
    void setisVegan(bool isVegan);
    bool getIsVegan() const {
            return isVegan_;
        }

    bool isPesca() const;
    void setisPesca(bool isPesca);
    bool getIsPesca() const {
            return isPesca_;
        }



private:
    QString name;
    QString description;
    QString calories;
    QString difficulty;
    QString steps;
    bool isVeggie_;
    bool isVegan_;
    bool isPesca_;


};

#endif // RECIPE_H





