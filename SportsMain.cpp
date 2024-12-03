#include "Team.h"

int main() {
    Team ravens = Team("Baltimore Ravens");
    ravens.setCoach("John Harbaugh", "Head Coach", 22);
    ravens.setEquipment("Helmets", "Riddell", 78);
    ravens.setEquipment("Shoulder Pads", "Nike", 82);
    ravens.addPlayer("Lamar Jackson");
    ravens.addPlayer("Derrick Henry");
    ravens.addPlayer("Zay Flowers");
    ravens.addPlayer("Roquan Smith");
    ravens.addPlayer("Kyle Hamilton");
    ravens.removePlayer("Zay Flowers");
    ravens.addPlayer("Justin Madubuike");
    for (int i = 0; i < 8; i++) {
        ravens.updateRecord(true);
    }
    for (int i = 0; i < 5; i++) {
        ravens.updateRecord(false);
    }
    ravens.print();
    return 0;
}