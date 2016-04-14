//
//  B.cpp
//  Test
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//
#ifndef B_h
#define B_h

class B: public A {
public:
    virtual void print() {
        cout << 'B' << endl;
    }
    
    void foo() {
        cout << "foo B" << endl;
    }
};

#endif /* B_h */