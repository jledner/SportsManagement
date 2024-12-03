#ifndef COACH_H
#define COACH_H

#include <iostream>
#include <string>
using namespace std;

class Coach {
private:
    string name;
    string specialty;  // e.g., "Defense", "Offense"
    int yearsExperience;
public:
    Coach(string name, string specialty, int years);
    string getName() { return name; }
    string getSpecialty() { return specialty; }
    int getExperience() { return yearsExperience; }
    void print();
};
#endif