#ifndef STEELTYPE_H
#define STEELTYPE_H
#include <iostream>
#include "Pokemon.h"


#pragma once

class SteelType: public Pokemon
{
public:
    SteelType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP):Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Fire, Fighting, Ground";
        resistance= "Bug, Dragon, Fairy, Flying, Grass, Ice, Normal, Psychic, Rock, Steel";
        immunity= "Poison";
        strength = "Fairy, Ice, Rock";
        statTotal= a + spA + d +spD + spd + HP;
    };
    ~SteelType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, immunity, strength;
int statTotal;
};

string SteelType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n" + "Immune to: " + immunity + "\n";

}

string SteelType::evaluateStats()const{
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