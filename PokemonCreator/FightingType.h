#ifndef FIGHTINGTYPE_H
#define FIGHTINGTYPE_H
#include <iostream>
#include "Pokemon.h"
using std::string;

#pragma once

class FightingType: public Pokemon
{
public:
    FightingType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP):Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Psychic, Flying, Fairy";
        resistance= "Bug, Dark, Rock";
        strength= "Dark, Ice, Normal, Steel, Rock";
        statTotal= a + spA + d + spD + spd + HP;
    };
    ~FightingType();
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, strength;
int statTotal;
};

string FightingType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";
}

string FightingType::evaluateStats()const{
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