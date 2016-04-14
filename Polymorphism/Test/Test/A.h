//
//  A.cpp
//  Test
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//
#ifndef A_h
#define A_h
#include <iostream>

using namespace std;

class A {
public:
    virtual void print() {
        cout << 'A' << endl;
    };
};

#endif /* A_h */