//
//  C.cpp
//  Test
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#ifndef C_h
#define C_h

class C: public B {
public:
    virtual void print() {
        cout << 'C' << endl;
    }
};

#endif /* C_h */