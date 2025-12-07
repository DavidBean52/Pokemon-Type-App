#ifndef ICETYPE_H
#define ICETYPE_H
#include <iostream>
#include "Pokemon.h"


#pragma once

class IceType:public Pokemon
{
public:
    IceType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP):Pokemon(n, nickn, a, spA, d, spD, spd, HP){
        weakness= "Steel, Fire, Fighting, Rock";
        resistance= "Ice";
        strength= "Dragon, Flying, Grass, Ground";
        statTotal= a + spA + d + spD + spd+ HP;
    };
    ~IceType(){};
    string getStats()const;
    string evaluateStats()const;

private:
string weakness;
string resistance;
string strength;
int statTotal;

};

string IceType::getStats()const{
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";
}

string IceType::evaluateStats()const{
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