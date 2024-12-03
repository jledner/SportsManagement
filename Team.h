#ifndef TEAM_H
#define TEAM_H

#include "Coach.cpp"
#include "Equipment.cpp"
#include <iostream>
#include <string>
using namespace std;

class Team {
private:
    string teamName;
    Coach* headCoach;
    Equipment gear;
    string roster[5];        // Store up to 5 player names
    int playerCount;
    int wins;
    int losses;
public:
    Team(string name);
    Team(string name, Coach* coach, Equipment gear);
    Team(const Team& other);  // Copy constructor
    const Team& operator=(const Team& other);  // Assignment operator
    
    void setCoach(string name, string specialty, int years);
    void setEquipment(string type, string brand, int quantity);
    bool addPlayer(string playerName);    // Returns false if roster is full
    void removePlayer(string playerName);
    void updateRecord(bool won);          // true for win, false for loss
    double getWinPercentage();
    void print();
    ~Team();
};
#endif