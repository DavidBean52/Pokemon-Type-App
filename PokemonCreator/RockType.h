#ifndef ROCKTYPE_H
#define ROCKTYPE_H
#include <iostream>
#include "Pokemon.h"

#pragma once

class RockType: public Pokemon
{
public:
    RockType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP):Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Fighting, Steel, Grass, Ground, Water";
        resistance= "Fire, Flying, Normal, Poison";
        strength= "Bug, Fire, Flying, Ice";
        statTotal= a + spA + d + spD + spd + HP;
    };
    ~RockType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, strength;
int statTotal;
};

string RockType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";
}
string RockType::evaluateStats()const{
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