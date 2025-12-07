#ifndef ELECTRICTYPE_H
#define ELECTRICTYPE_H
#include <iostream>
#include "Pokemon.h"
using std::string;

#pragma once

class ElectricType: public Pokemon
{
public:
    ElectricType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Ground";
        resistance= "Electric, Flying, Steel";
        strength= "Flying, Water";
        statTotal= a + spA + d +spD + spd + HP;
    };
    ~ElectricType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness;
string resistance;
string strength;
int statTotal;
};

string ElectricType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";

}

string ElectricType::evaluateStats()const{
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