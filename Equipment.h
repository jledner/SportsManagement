#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <iostream>
#include <string>
using namespace std;

class Equipment {
private:
    string type;        // e.g., "Basketball", "Football"
    string brand;
    int quantity;
    bool needsReplacement;
public:
    Equipment();
    Equipment(string type, string brand, int quantity);
    void markForReplacement();
    void print();
};
#endif