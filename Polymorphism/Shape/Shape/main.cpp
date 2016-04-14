//
//  main.cpp
//  Shape
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include <iostream>
#include "Shape.hpp"
#include "Retangle.hpp"

int main(int argc, const char * argv[]) {
    Retangle r = Retangle(4, 5);
    r.print();
    
    Shape *sp = new Retangle(5, 6);
    sp->print();
    return 0;
}
