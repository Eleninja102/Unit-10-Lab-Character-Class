//
//  WaterType.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#ifndef WaterType_hpp
#define WaterType_hpp

#include <iostream>
#include <sstream>
#include "Pokemon.hpp"

using namespace std;

class WaterType: public Pokemon
{
public:
    WaterType(string name, int hp, int defense, int surfSpeed, int attack):Pokemon(name, hp, defense, attack), surfSpeed(surfSpeed){}
    virtual string output()const;

protected:
    int surfSpeed;
};



#endif /* WaterType_hpp */
