//
//  WaterType.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#include "WaterType.hpp"
string WaterType::output() const{
    stringstream ss;
    ss << Pokemon::output();
    ss << "Surf Speed : " << surfSpeed << endl;
    return ss.str();
}

