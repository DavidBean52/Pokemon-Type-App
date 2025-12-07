#ifndef GHOSTTYPE_H
#define GHOSTTYPE_H
#include <iostream>
#include "Pokemon.h"
using std::string;

#pragma once

class GhostType: public Pokemon
{
public:
    GhostType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Dark, Ghost";
        resistance= "Bug, Poison";
        immunity= "Normal, Fighting";
        strength= "Ghost, Psychic";
        statTotal = a + spA + d + spD + spd + HP;
    };
    ~GhostType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, immunity, strength;
int statTotal;
};

string GhostType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";

}

string GhostType::evaluateStats()const{
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