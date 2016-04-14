//
//  main.cpp
//  Array
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include <iostream>
#include "Array.hpp"

int main(int argc, const char * argv[]) {
    int N = 20;
    Array a = Array(N);
    Array b = Array(N);
    Array c = Array(N + 1);
    
    cout << a << b << c << endl;
    for (int i = 0; i < N; i++) {
        a[i] = i;
    }
    for (int i = 0; i < N; i++) {
        b[i] = i;
    }
    for (int i = 0; i < N + 1; i++) {
        c[i] = i + 1;
    }
    Array d = Array(c);
    cout << a << b << c << d << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a == c: " << (a == c) << endl;
    cout << "b == c: " << (b == c) << endl;
    cout << "c == d: " << (c == d) << endl;
    cout << a.getSize() << endl;
    cout << d.getSize() << endl;
    return 0;
}
