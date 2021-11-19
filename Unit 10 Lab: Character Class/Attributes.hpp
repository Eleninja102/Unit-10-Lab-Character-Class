//
//  Attributes.hpp
//  Unit 10 Lab: Character Class
//
//  Created by Coleton Watt on 11/19/21.
//

#ifndef Attributes_hpp
#define Attributes_hpp



#include <iostream>
#include <sstream>
using namespace std;
class Attributes{
public:
    Attributes(double weight, double height) : weight(weight), height(height) {}
    friend ostream& operator<<(ostream& out, const Attributes& me);
protected:
    double weight;
    double height;
};



#endif /* Attributes_hpp */
