#ifndef FIRETYPE_H
#define FIRETYPE_H

#pragma once

#include "Pokemon.h"
using std::string;

class FireType: public Pokemon
{
public:
    FireType(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP): Pokemon(n, nickn, a, spA, d, spD, spd, HP)
    {weakness = "Water, Ground, Rock";
    resistance = "Grass, Fire, Bug";
    strength= "Bug, Grass, Ice";
    statTotal= a+spA+d+spD+spd+HP;};
    ~FireType(){};
    string getStats()const;
    string evaluateStats()const;
    
private:

string weakness; 
string resistance;
string strength;
int statTotal;
};

string FireType::getStats()const{
    
    return Pokemon::getStats() + "Stat Total: " + to_string(statTotal)+ "\n" + "Weak to: " + weakness + "\n" + 
    "Resists: " + resistance +"\n" + "Strong against: " + strength + "\n";
}

string FireType::evaluateStats()const{
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