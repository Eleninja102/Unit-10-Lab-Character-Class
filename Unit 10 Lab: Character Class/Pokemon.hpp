//
//  Pokemon.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/18/21.
//

#ifndef Pokemon_hpp
#define Pokemon_hpp

#include <iostream>
#include <sstream>
#include "Attributes.hpp"
#include "Stats.hpp"


using namespace std;


class Pokemon{
public:
    Pokemon(string name, int hp, int defense, int attack): name(name), startingStats(hp, defense, attack) {}
    //Employee(string name, int year, int month, int day) : name(name), startingStats(year, month, day) {}
    ~Pokemon();
    void setAttributes(double weight, double height);
    virtual string output()const;
    
    friend ostream& operator<<(ostream& out, const Pokemon& pok);
    
protected:
    string name;
    Attributes* attributes;
    Stats startingStats;


};

#endif /* Pokemon_hpp */
