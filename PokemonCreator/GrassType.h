#ifndef GRASSTYPE_H
#define GRASSTYPE_H

#pragma once
#include <iostream>
#include "Pokemon.h"
using std::string;

class GrassType: public Pokemon
{
   public:
    GrassType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP)
    {weakness = "Fire, Bug, Ice, Flying, Poison";
    resistance = "Electric, Grass, Ground, Water";
    strength= "Water, Ground, Rock";
    statTotal= a+spA+d+spD+spd+HP;};
    ~GrassType(){};
    string getStats()const;
    string evaluateStats()const;
    
private:

string weakness; 
string resistance;
string strength;
int statTotal;
};

string GrassType::getStats()const{
    
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";
}

string GrassType::evaluateStats()const{
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