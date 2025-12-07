#ifndef WATERTYPE_H
#define WATERTYPE_H
#include <iostream>
#include "Pokemon.h"
using std::string;

#pragma once

class WaterType: public Pokemon
{
public:
    WaterType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP)
    {weakness = "Grass, Electric";
    resistance = "Water, Fire, Steel, Ice";
    strength= "Fire, Ground, Rock";
    statTotal= a+spA+d+spD+spd+HP;};
    ~WaterType(){};
    string getStats()const;
    string evaluateStats()const;
private:
    string weakness; 
    string resistance;
    string strength;
    int statTotal;
};

string WaterType::getStats()const{
    
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";

}

string WaterType::evaluateStats()const{
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