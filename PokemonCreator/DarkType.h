#ifndef DARKTYPE_H
#define DARKTYPE_H
#include "Pokemon.h"
#include <iostream>

using std::string;

#pragma once

class DarkType: public Pokemon
{
public:
    DarkType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness = "Fighting, Bug, Fairy";
        resistance= "Dark, Ghost";
        immunity= "Psychic";
        strength= "Ghost, Psychic";
        statTotal= a + spA + d + spD + spd + HP;
    };
    ~DarkType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness;
string resistance;
string immunity;
string strength;
int statTotal;
};

string DarkType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n" + "Immune to: " + immunity + "\n";

}

string DarkType::evaluateStats()const{
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