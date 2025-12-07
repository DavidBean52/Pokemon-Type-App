#ifndef PSYCHICTYPE_H
#define PSYCHICTYPE_H
#include <iostream>
#include "Pokemon.h"

#pragma once

class PsychicType: public Pokemon
{
public:
    PsychicType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Bug, Dark, Ghost";
        resistance= "Fighting, Psychic";
        strength = "Fighting, Poison";
        statTotal= a +spA + d + spD + spd + HP;
    };
    ~PsychicType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness;
string resistance;
string strength;
int statTotal;
};

string PsychicType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";

}

string PsychicType::evaluateStats()const{
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