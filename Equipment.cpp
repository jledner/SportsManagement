#include "Equipment.h"

Equipment::Equipment() : type(""), brand(""), quantity(0) {}

Equipment::Equipment(string type, string brand, int quantity) : type(type), brand(brand), quantity(quantity) {}

void Equipment::markForReplacement() {
    needsReplacement = true;
}

void Equipment::print() {
    cout << "     Type: " << type << endl;
    cout << "     Brand: " << brand << endl;
    cout << "     Quantity: " << quantity << endl;
}