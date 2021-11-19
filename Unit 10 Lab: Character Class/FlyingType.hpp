//
//  FlyingType.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#ifndef FlyingType_hpp
#define FlyingType_hpp

#include <iostream>
#include <sstream>
#include "Pokemon.hpp"

using namespace std;

class FlyingType: public Pokemon
{
public:
    FlyingType(string name, int hp, int defense, int flyingSpeed, int attack):Pokemon(name, hp, defense, attack), flyingSpeed(flyingSpeed){}
    virtual string output() const;

protected:
    int flyingSpeed;
};

#endif /* FlyingType_hpp */
