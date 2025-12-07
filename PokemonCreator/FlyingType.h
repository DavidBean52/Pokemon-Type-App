#ifndef FLYINGTYPE_H
#define FLYINGTYPE_H
#include <iostream>
#include "Pokemon.h"
using std::string;

#pragma once

class FlyingType: public Pokemon
{
public:
    FlyingType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Rock, Electric, Ice";
        resistance= "Bug, Fighting, Grass";
        immunity= "Ground";
        strength= "Fighting, Bug, Grass";
        statTotal= a + spA + d +spD + spd + HP;
    };
    ~FlyingType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness, resistance, immunity, strength;
int statTotal;
};

string FlyingType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n" + "Immune to: " + immunity + "\n";

}

string FlyingType::evaluateStats()const{
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