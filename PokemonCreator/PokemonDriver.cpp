//use pointers for vector
#include "Pokemon.h"
#include "FireType.h"
#include "GrassType.h"
#include "WaterType.h"
#include "BugType.h"
#include "DarkType.h"
#include "DragonType.h"
#include "ElectricType.h"
#include "FairyType.h"
#include "FightingType.h"
#include "FlyingType.h"
#include "GhostType.h"
#include "GroundType.h"
#include "IceType.h"
#include "NormalType.h"
#include "PoisonType.h"
#include "PsychicType.h"
#include "RockType.h"
#include "SteelType.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
vector<Pokemon*> pokemonList;
void addBug(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addDark(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addDragon(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addElectric(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addFairy(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addFire(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addFighting(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addFlying(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addGhost(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addGrass(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addGround(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addIce(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addNormal(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addPoison(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addPsychic(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addRock(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addSteel(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void addWater(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP);
void deletePokemon();
void statEval();


int main(){

string name;
string nickname;
int atck;
int spAtck;
int def;
int spDef;
int speed;
int hp;
bool needsToAdd= true;
string pokemonType[]= {"Bug", "Dark", "Dragon", "Electric", "Fairy", "Fighting" , "Fire", "Flying", "Ghost", "Grass", "Ground", "Ice", "Normal", "Poison", "Psychic", "Rock", "Steel", "Water"};
int userSelection;
int typeSelection;

while(needsToAdd){
    cout<< "Choose from the following:"<< endl;
    cout<< "1. Add to the list"<< endl;
    cout<< "2. Evaluate Stats of all Pokemon"<< endl;
    cout<< "3. Quit"<< endl;
    cin>> userSelection;

    if(userSelection== 1){
        cout<< "Select the type of the Pokemon:";
        for(int i=0; i < 18;i++){
        cout<< i+1 << ". "<< pokemonType[i]<< endl;
        }
        cin>>typeSelection;

        if(typeSelection <= 0 || typeSelection >= 19){
            cout<< "Error! Choose again!"<< endl;
            continue;
        }
        
        cout<< "Enter the Pokemon's name: "<< endl;
        cin>> name;
        cout<< "Enter the Pokemon's nickname: "<< endl;
        cin>> nickname;
        cout<< "Enter the Pokemon's base attack: "<< endl;
        cin>> atck;
        cout<< "Enter the Pokemon's base special attack: "<< endl;
        cin>> spAtck;
        cout<< "Enter the Pokemon's base defense: "<< endl;
        cin>> def;
        cout<< "Enter the Pokemon's base special defense: "<< endl;
        cin>> spDef;
        cout<< "Enter the Pokemon's base speed: "<< endl;
        cin>> speed;
        cout<< "Enter the Pokemon's base HP: "<< endl;
        cin>> hp;

        switch(typeSelection){
            case 1:
            addBug(name,nickname,atck,spAtck,def,spDef,speed,hp);
            break;
            case 2:
            addDark(name,nickname,atck,spAtck,def,spDef,speed,hp);
            break;
            case 3:
            addDragon(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 4:
            addElectric(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 5:
            addFairy(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 6:
            addFighting(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 7:
            addFire(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 8:
            addFlying(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 9:
            addGhost(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 10:
            addGrass(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 11:
            addGround(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 12:
            addIce(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 13:
            addNormal(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 14:
            addPoison(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 15:
            addPsychic(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 16:
            addRock(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 17:
            addSteel(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
            case 18:
            addWater(name, nickname, atck, spAtck, def, spDef, speed, hp);
            break;
        }
    }
    else if(userSelection== 2){
        statEval();
        continue;
    }
    else if(userSelection== 3){
        statEval();
        deletePokemon();
        cout<< "Goodbye!"<< endl;
        needsToAdd= false;
    }
    else{
        cout<< "Error! Make a different selection!";
        continue;
    }
}

/*
pokemonList.push_back(new FireType("Cinderace", "Lionel", 116, 65, 75, 75, 119, 80));
pokemonList.push_back(new WaterType("Inteleon", "Bond", 85, 125, 65, 65,120, 70));
pokemonList.push_back(new GrassType("Rillaboom", "Clay", 125, 60, 90, 70, 85, 100));
pokemonList.push_back(new FireType("Typhlosion", "Bront",84, 109, 78, 85, 100, 78));
pokemonList.push_back(new GrassType("Chikorita", "Jim", 49, 49, 65, 65, 45, 45));*/




}

void addBug(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new BugType(n, nickn, a, spA, d, spD, spd, HP));
}

void addDark(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new DarkType(n,nickn, a, spA, d,  spD, spd, HP));
}

void addDragon(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new DragonType(n, nickn, a, spA, d, spD, spd, HP));
}

void addElectric(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new ElectricType(n, nickn, a, spA, d, spD, spd, HP));
}

void addFairy(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new FairyType(n, nickn, a, spA, d, spD, spd, HP));
}

void addFire(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new FireType(n, nickn, a, spA, d, spD, spd, HP));
}

void addFighting(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new FightingType(n, nickn, a, spA, d, spD, spd, HP));
}

void addFlying(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new FlyingType(n, nickn, a, spA, d, spD, spd, HP));
}

void addGhost(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new GhostType(n, nickn, a, spA, d, spD, spd, HP));
}

void addGrass(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new GrassType(n, nickn, a, spA, d, spD, spd, HP));
}

void addGround(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new GroundType(n, nickn, a, spA, d, spD, spd, HP));
}

void addIce(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new IceType(nickn, n, a, spA, d, spD, spd, HP));
}

void addNormal(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new NormalType(n, nickn, a, spA, d, spD, spd, HP));
}

void addPoison(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new PoisonType(n, nickn, a, spA, d, spD, spd, HP));
}

void addPsychic(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new PsychicType(n,nickn,a,spA,d,spD,spd,HP));
}

void addRock(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new RockType(n,nickn,a,spA,d,spD,spd,HP));
}

void addSteel(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new SteelType(n, nickn, a, spA, d, spD, spd, HP));
}

void addWater(string n, string nickn, int a, int spA, int d, int spD, int spd, int HP){
    pokemonList.push_back(new WaterType(n, nickn, a, spA, d, spD, spd, HP));
}

void deletePokemon(){
    for(Pokemon* p: pokemonList){
    delete p;
    }
}

void statEval(){
    for(Pokemon* p: pokemonList){
        cout<< p->getStats()<< endl;
        cout<< p->evaluateStats()<<endl;
    }
}