#ifndef FAIRYTYPE_H
#define FAIRYTYPE_H
#include <iostream>
#include "Pokemon.h"
using std::string;

#pragma once

class FairyType: public Pokemon
{
public:
    FairyType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Steel, Poison";
        resistance= "Bug, Dark, Fighting";
        immunity= "Dragon";
        strength= "Dragon, Dark, Fighting";
        statTotal= a + spA + d + spD + spd + HP;
    };
    ~FairyType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, immunity, strength;
int statTotal;
};

string FairyType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";

}

string FairyType::evaluateStats()const{
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