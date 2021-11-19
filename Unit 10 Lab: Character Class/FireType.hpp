//
//  FireType.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#ifndef FireType_hpp
#define FireType_hpp


#include <iostream>
#include <sstream>
#include "Pokemon.hpp"

using namespace std;

class FireType: public Pokemon
{
public:
    FireType(string name, int hp, int defense, int flameSpeed, int attack):Pokemon(name, hp, defense, attack), flameSpeed(flameSpeed){}
    virtual string output()const;

protected:
    int flameSpeed;
};


#endif /* FireType_hpp */
