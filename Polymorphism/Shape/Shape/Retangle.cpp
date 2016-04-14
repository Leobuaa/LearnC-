//
//  Retangle.cpp
//  Shape
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include "Retangle.hpp"

Retangle::Retangle(const double len, const double wid):length(len), width(wid) {
    
}

double Retangle::getLength() const {
    return length;
}

double Retangle::getWidth() const {
    return width;
}

void Retangle::setLength(double len) {
    length = len;
}

void Retangle::setWidth(double wid) {
    width = wid;
}

double Retangle::getArea() const {
    return length * width;
}

double Retangle::getCircumference() const {
    return 2 * (length + width);
}

void Retangle::print() const {
    cout << "This is a Retangle." << endl;
    cout << "The length is: " << length << endl;
    cout << "The width is: " << width << endl;
    cout << "The area is: " << getArea() << endl;
    cout << "The circumference is: " << getCircumference() << endl;
}