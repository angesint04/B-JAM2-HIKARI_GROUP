/*
** EPITECH PROJECT, 2024
** Student.cpp
** File description:
** Student.cpp
*/

#include "Student.hpp"
#include <iostream>
#include <algorithm>
#include <string>

Student::Student(std::string name) : name(name), energy(100) {
    std::cout << "Student " << name << ": I'm ready to learn C++.\n";
}

Student::~Student() {
    std::cout << "Student " << name << ": Wow, much learning today, very smart, such C++.\n";
}

bool Student::learn(std::string text) {
    std::string change = text;
    size_t i = change.find("C++");
    if (energy < 42 && i != std::string::npos) {
        change.replace(change.find("C++"), 3, "shit");
        std::cout << "Student " << name << ": " << change << "\n";
        return false;
    }
    energy -= 42;
    std::cout << "Student " << name << ": " << text << "\n";
    return true;
}

void Student::drink(std::string drinkName) {
    if (drinkName == "Red Bull") {
        std::cout << "Student " << name << ": Red Bull gives you wings!\n";
        energy = std::min(100, energy + 32);
    } else if (drinkName == "Monster") {
        std::cout << "Student " << name << ": Unleash The Beast!\n";
        energy = std::min(100, energy + 64);
    } else {
        std::cout << "Student " << name << ": ah, yes... enslaved moisture.\n";
        energy = std::min(100, energy + 1);
    }
}
