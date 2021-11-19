//
//  Attributes.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#include "Attributes.hpp"

ostream& operator<< (ostream& out, const Attributes& me) {
    out << me.weight << " lbs, " << me.height << "meters" << endl;
    return out;
}
