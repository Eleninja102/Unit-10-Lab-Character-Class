//
//  FireType.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#include "FireType.hpp"
string FireType::output() const{
    stringstream ss;
    ss << Pokemon::output();
    ss << "Flame Speed: " << flameSpeed << endl;
    return ss.str();
}


