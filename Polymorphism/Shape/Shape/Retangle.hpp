//
//  Retangle.hpp
//  Shape
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#ifndef Retangle_hpp
#define Retangle_hpp

#include <iostream>
#include "Shape.hpp"
using namespace std;

class Retangle: public Shape {
public:
    Retangle(const double, const double);
    double getLength() const;
    double getWidth() const;
    void setLength(double);
    void setWidth(double);
    virtual double getArea() const;
    virtual double getCircumference() const;
    virtual void print() const;
    
private:
    double length;
    double width;
};

#endif /* Retangle_hpp */
