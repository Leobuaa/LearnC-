//
//  main.cpp
//  Test
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include <iostream>
#include <vector>
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"
#include "F.h"
#include "G.h"

void test1() {
    vector<A*> arr(6, 0);
    arr[0] = new A();
    arr[1] = new B();
    arr[2] = new C();
    arr[3] = new D();
    arr[4] = new E();
    arr[5] = new F();
    for (int i = 0; i < 6; i++) {
        arr[i]->print();
    }
    // The output is A B C D E F
}

void test2() {
    A* g1 = new G();
    D* g2 = new G();
    F* g3 = new G();
    g1->print();
    g2->print();
    g3->print();
    // The output is F F F, the nearest parent method is invoked.
}

void test3() {
    A a1 = A();
    A b1 = B();
    A c1 = C();
    a1.print();
    b1.print();
    c1.print();
    // The output is A A A, only using pointer is available.
}

void test4() {
    A* ap1 = new A();
    A* ap2 = new B();
    B* b1 = dynamic_cast<B*>(ap1); // b1 = NULL
    B* b2 = dynamic_cast<B*>(ap2);
    if (b1 != 0) {
        b1->print(); // it won't run
        b1->foo();
    }
    
    if (b2 != 0) {
        b2->print();
        b2->foo(); // The output is B foo B
    }
}

int main(int argc, const char * argv[]) {
    test1();
    test2();
    test3();
    test4();
    return 0;
}
