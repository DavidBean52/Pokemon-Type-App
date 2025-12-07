#ifndef BUGTYPE_H
#define BUGTYPE_H

#pragma once
#include <iostream>
#include "Pokemon.h"


class BugType: public Pokemon
{
public:
    BugType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP)
    {weakness = "Fire, Flying, Rock";
    resistance = "Fighting, Grass, Ground";
    strength= "Dark, Grass, Psychic";
    statTotal= a+spA+d+spD+spd+HP;};
    ~BugType(){};
    string getStats()const;
    string evaluateStats()const;
private:
    string weakness; 
    string resistance;
    string strength;
    int statTotal;
};

string BugType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";

}

string BugType::evaluateStats()const{
    string totalEval;
   
   if (statTotal>= 450){
    totalEval= "Good stat total overall!";
   }
   else if(statTotal <450 && statTotal >= 350){
    totalEval = "Decent stats overall!";
   }
   else{
    totalEval= "Bad overall stats!";
   }
   
    return Pokemon::evaluateStats() + totalEval + "\n";
}

#endif