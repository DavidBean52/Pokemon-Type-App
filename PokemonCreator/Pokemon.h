#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <iomanip>
using std::string;
using std::cin;
using std::cout;
using std::to_string;
using std::endl;
using std::ostream;


#pragma once

class Pokemon
{
public:
    Pokemon(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
    ~Pokemon(){};

    virtual string getStats()const;
    friend ostream& operator<<(ostream& out, const Pokemon p);
    virtual string evaluateStats()const;
    

protected:
string name;
string nickname;
int attack;
int spAttack;
int defense;
int spDefense;
int speed;
int hp;
};

Pokemon::Pokemon(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
name = n;
nickname= nickn;
attack = a;
spAttack= spA;
spDefense= spD;
defense= d;
speed=spd;
hp = HP;

}

string Pokemon::getStats()const{
    return "Name: " + name + "\n" + "Nickname: " + nickname + "\n" + "Attack: "
    + to_string(attack) + "\n" +  "Special Attack: " + to_string(spAttack) + "\n" + "Defense: " + to_string(defense)+ "\n"
    "Special Defense: " + to_string(spDefense)+  "\n" + "Speed: " + to_string(speed) + "\n" + "HP: " + to_string(hp) + "\n";
}

ostream& operator<<(ostream& out, const Pokemon &p){
    out<< p.getStats();
    return out;
}

string Pokemon::evaluateStats()const{
    string attackEval;
    string defenseEval;
    string spAttackEval;
    string spDefenseEval;
    string hpEval;
    string speedEval;

    //attack evaluation
    if (attack >= 100){
        attackEval= "Good Attack!";
    }
    else if (attack < 100 && attack >= 75){
        attackEval= "Decent Attack!";
    }
    else{
        attackEval= "Bad Attack!";
    }

    //Special attack evaluation

    if(spAttack >= 100){
        spAttackEval= "Good Special Attack!";
    }
    else if (spAttack < 100 && spAttack>= 75){
        spAttackEval= "Decent Special Attack!";
    }
    else{
        spAttackEval= "Bad Special Attack!";
    }

    //defense evaluation
    if(defense >= 100){
        defenseEval= "Good Defense!";
    }
    else if (defense < 100 && defense >= 75){
        defenseEval= "Decent Defense!";
    }
    else{
        defenseEval= "Bad Defense!";
    }

    //special defense evaluation
    if(spDefense >= 100){
        spDefenseEval= "Good Special Defense!";
    }
    else if(spDefense < 100 && spDefense>= 75){
        spDefenseEval= "Decent Special Defense!";
    }
    else{
        spDefenseEval="Bad Special Defense!";
    }

    //speed evaluation
    if(speed>= 100){
        speedEval= "Good Speed!";
    }
    else if (speed < 100 && speed >=75){
        speedEval= "Decent Speed!";
    }
    else{
        speedEval= "Bad Speed!";
    }

    //hp evaluation
    if(hp >= 100){
        hpEval= "Good HP!";
    }
    else if(hp < 100 && speed >= 75){
        hpEval= "Decent HP!";
    }
    else{
        hpEval= "Bad HP!";
    }

    return attackEval + "\n" + spAttackEval + "\n" + defenseEval + "\n" + spDefenseEval + "\n" + speedEval + "\n" + hpEval+ "\n";
}

#endif