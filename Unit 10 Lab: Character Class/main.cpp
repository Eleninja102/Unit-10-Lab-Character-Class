#include "Pokemon.hpp"
#include "Stats.hpp"
#include "Attributes.hpp"

#include "WaterType.hpp"
#include "FireType.hpp"
#include "EathType.hpp"
#include "FlyingType.hpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


void prompt(const char* message, string& variable);
void prompt(const char* message, int& number);
void prompt(const char* message, double& number);


int main()
{
    vector<Pokemon*> pokemon;
    cout << "Welcome To POKEMON TEAM CREATOR\n First Select the Type Of Pokemon";
    while (true)
    {
        
        cout << endl;
        cout << "1. Water Type Pokemon" << endl;
        cout << "2. Fire Type Pokemon" << endl;
        cout << "3. Earth Type Pokemon" << endl;
        cout << "5. Flying Type Pokemon" << endl;
        cout << "5. List" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Choose an Pokemon or an Action: ";

        char    c;
        cin >> c;
        cin.ignore();

        string name;
        int hp;
        int defense;
        int attack;
        double weight;
        double height;

        switch (c)
        {    case '1' :    // Water Pokemon
                {
                    int surfSpeed;

                    prompt("Name", name);
                    prompt("HP", hp);
                    prompt("DEFENSE", defense);
                    prompt("ATTACK", attack);
                    prompt("WEIGHT", weight);
                    prompt("HEIGHT", height);
                    prompt("Surf Speed", surfSpeed);
                    WaterType* water = new WaterType(name, hp, defense, surfSpeed, attack);
                    water->setAttributes(weight, height);
                    cout << *water << endl;
                    pokemon.push_back(water);
                    break;
                }

            case '2' :    // Fire Pokemon
                {
                    int flameSpeed;
                    prompt("Name", name);
                    prompt("HP", hp);
                    prompt("DEFENSE", defense);
                    prompt("ATTACK", attack);
                    prompt("WEIGHT", weight);
                    prompt("HEIGHT", height);
                    prompt("Flame Speed", flameSpeed);

                    FireType* fire = new FireType(name, hp, defense, flameSpeed, attack);
                    fire->setAttributes(weight, height);
                    cout << *fire << endl;
                    pokemon.push_back(fire);
                    break;
                }

            case '3' :    // Earth Pokemon
                {
                    int diggingSpeed;
                    prompt("Name", name);
                    prompt("HP", hp);
                    prompt("DEFENSE", defense);
                    prompt("ATTACK", attack);
                    prompt("WEIGHT", weight);
                    prompt("HEIGHT", height);
                    prompt("Digging Speed", diggingSpeed);

                    EathType* earth = new EathType(name, hp, defense, diggingSpeed, attack);
                    earth->setAttributes(weight, height);
                    cout << *earth << endl;
                    pokemon.push_back(earth);
                    break;
                }

            case '4' : // Flying Pokemon
            {
                int flyingSpeed;
                prompt("Name", name);
                prompt("HP", hp);
                prompt("DEFENSE", defense);
                prompt("ATTACK", attack);
                prompt("WEIGHT", weight);
                prompt("Height in Meters", height);
                prompt("Flying Speed", flyingSpeed);

                FlyingType* flying = new FlyingType(name, hp, defense, flyingSpeed, attack);
                flying->setAttributes(weight, height);
                cout << *flying << endl;
                pokemon.push_back(flying);
                
                break;
            }
            case '5' :
                cout << "\nPokemon: " << endl;
                for (auto& e : pokemon) {
                    cout << *e << endl;
                }
                break;

            case '6' :
                for (auto& e : pokemon) {
                    delete e;
                }
                exit(0);
        }
    }
    for (auto& e : pokemon) {
        delete e;
    }

    return 0;
}


void prompt(const char* message, string& variable)
{
    cout << message << ": ";
    getline(cin, variable);
}


void prompt(const char* message, int& number)
{
    cout << message << ": ";
    cin >> number;
    cin.ignore();        // discard \n following number
}

void prompt(const char* message, double& number)
{
    cout << message << ": ";
    cin >> number;
    cin.ignore();        // discard \n following number
}

