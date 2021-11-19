//
//  Stats.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#ifndef Stats_hpp
#define Stats_hpp

#include <iostream>

using namespace std;
class Stats{
public:
    Stats(int hp, int defense, int attack) : hp(hp), defense(defense), attack(attack) {}
    friend ostream& operator<<(ostream& out, const Stats& me);


protected:
    int hp;
    int defense;
    int attack;
};




#endif /* Stats_hpp */
