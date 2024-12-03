#include "Team.h"

Team::Team(string name) : teamName(name), headCoach(nullptr), gear(gear), roster(), playerCount(0), wins(0), losses(0) {}

Team::Team(string name, Coach* coach, Equipment gear) : teamName(name), headCoach(coach), gear(gear), roster(), playerCount(0), wins(0), losses(0) {}

Team::Team(const Team& other) {
    teamName = other.teamName;
    if (other.headCoach != nullptr) {
        headCoach = new Coach(other.headCoach->getName(), other.headCoach->getSpecialty(), other.headCoach->getExperience());
    }
    gear = other.gear;
    if (other.roster != nullptr) {
        for (int i = 0; i < 5; i++) {
            roster[i] = other.roster[i];
        }
    }
    playerCount = other.playerCount;
    wins = other.wins;
    losses = other.losses;
}

const Team& Team::operator=(const Team& other) {
    if (&other != nullptr) {
        teamName = other.teamName;
        if (other.headCoach != nullptr) {
            headCoach = new Coach(other.headCoach->getName(), other.headCoach->getSpecialty(), other.headCoach->getExperience());
        }
        gear = other.gear;
        if (other.roster != nullptr) {
            for (int i = 0; i++; i < 5) {
                roster[i] = other.roster[i];
            }
        }
        playerCount = other.playerCount;
        wins = other.wins;
        losses = other.losses;
    }
    return *this;
}

void Team::setCoach(string name, string specialty, int years) {
    if (headCoach != nullptr) {
        delete headCoach;
    }
    headCoach = new Coach(name, specialty, years);
}

void Team::setEquipment(string type, string brand, int quantity) {
    gear = Equipment(type, brand, quantity);
}

bool Team::addPlayer(string playerName) {
    if (playerCount >= 5) {
        return false;
    }
    roster[playerCount] = playerName;
    playerCount++;
}
void Team::removePlayer(string playerName) {
    for (int i = 0; i < 5; i++) {
        if (roster[i] == playerName) {
            for (int j = 1; j < 4; j++) {
                roster[j] = roster[j + 1];
            }
            roster[4] = "";
            playerCount--;
            break;
        }
    }
}
void Team::updateRecord(bool won) {
    if (won)
        wins++;
    else
        losses++;
}
double Team::getWinPercentage() {
    return static_cast<double>(wins) / losses;
}

void Team::print() {
    cout << "Team Name: " << teamName << endl;
    cout << "Head Coach: " << headCoach->getName() << endl;
    cout << "Equipment: " << endl;
    gear.print();
    cout << "Roster: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "     " << roster[i] << endl;
    }
    cout << "Player Count: " << playerCount << endl;
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl;
    cout << "Win Percentage: " << getWinPercentage() << endl;
}
// ~Team::Team() {}