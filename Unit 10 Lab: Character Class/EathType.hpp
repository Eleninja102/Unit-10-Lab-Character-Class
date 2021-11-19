//
//  EathType.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#ifndef EathType_hpp
#define EathType_hpp

#include <iostream>
#include <sstream>
#include "Pokemon.hpp"

using namespace std;

class EathType: public Pokemon
{
public:
    EathType(string name, int hp, int defense, int diggingSpeed, int attack):Pokemon(name, hp, defense, attack), diggingSpeed(diggingSpeed){}
    virtual string output()const;

protected:
    int diggingSpeed;
};



#endif /* EathType_hpp */
