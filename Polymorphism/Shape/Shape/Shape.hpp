//
//  Shape.hpp
//  Shape
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    Shape();
    virtual double getArea() const = 0;
    virtual double getCircumference() const = 0;
    virtual void print() const;
};

#endif /* Shape_hpp */
