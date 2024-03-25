/*
** EPITECH PROJECT, 2024
** Student.h
** File description:
** Student.h
*/

#include <string>

class Student {
public:
    Student(std::string name);
    ~Student();

    bool learn(std::string text);
    void drink(std::string drinkName);

private:
    std::string name;
    int energy;
};
