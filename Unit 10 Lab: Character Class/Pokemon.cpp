//
//  Pokemon.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/18/21.
//

#include "Pokemon.hpp"


Pokemon::~Pokemon() {
    if (attributes)
        delete attributes;
}


void Pokemon::setAttributes(double weight, double height) {
    attributes = new Attributes(weight, height);
}

string Pokemon::output() const {
    stringstream ss;
    ss << name << endl;
    ss << startingStats;
    if (attributes) {
        ss << *attributes;
    }
    return ss.str();
}


ostream& operator << (ostream& out, const Pokemon& pok) {
    out << pok.output();
    return out;
}

