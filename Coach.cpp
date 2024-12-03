#include "Coach.h"

Coach::Coach(string name, string specialty, int years) : name(name), specialty(specialty), yearsExperience(years) {}

void Coach::print(){
    cout << "Name: " << name << endl;
    cout << "Specialty: " << specialty << endl;
    cout << "Years Experience: " << yearsExperience << endl;
}