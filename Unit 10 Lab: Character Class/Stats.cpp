//
//  Stats.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#include "Stats.hpp"


ostream& operator<<(ostream& out, const Stats& me) {
    out << "HP: " << me.hp << " - DEFENSE: " << me.defense << " - ATTACK: " << me.attack << endl;
    return out;
}
