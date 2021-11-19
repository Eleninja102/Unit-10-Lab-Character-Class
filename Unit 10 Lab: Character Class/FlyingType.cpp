//
//  FlyingType.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#include "FlyingType.hpp"


string FlyingType::output() const{
    stringstream ss;
    ss << Pokemon::output();
    ss << "Flying Speed: " << flyingSpeed << endl;
    return ss.str();
}
