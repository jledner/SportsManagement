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
        for (int i = 0; i++; i < 5) {
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