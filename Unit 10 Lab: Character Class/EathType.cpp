//
//  EathType.cpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#include "EathType.hpp"
string EathType::output() const{
    stringstream ss;
    ss << Pokemon::output();
    ss << "Digging Speed: " << diggingSpeed << endl;
    return ss.str();
}
