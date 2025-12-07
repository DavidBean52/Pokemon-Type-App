#ifndef GROUNDTYPE_H
#define GROUNDTYPE_H
#include <iostream>
#include "Pokemon.h"


#pragma once

class GroundType: public Pokemon
{
public:
    GroundType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness="Grass, Water, Ice";
        resistance= "Poison, Rock";
        immunity = "Electric";
        strength= "Electric, Fire, Rock, Poison";
        statTotal = a + spA + d + spD + spd + HP;
    };
    ~GroundType();
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, immunity, strength;
int statTotal;
};

string GroundType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n" + "Immune to: " + immunity + "\n";

}

string GroundType::evaluateStats()const{
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