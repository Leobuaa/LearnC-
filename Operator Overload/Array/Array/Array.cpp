//
//  Array.cpp
//  Array
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include "Array.hpp"
#include <iomanip>
using namespace std;

Array::Array(int arraySize) {
    size = ((arraySize > 0) ? arraySize : 10);
    ptr = new int[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = 0;
    }
}

Array::Array(const Array &anotherArray):size(anotherArray.size) {
    ptr = new int[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = anotherArray.ptr[i];
    }
}

Array::~Array() {
    delete [] ptr;
}

int Array::getSize() const {
    return size;
}

const Array & Array::operator=(const Array& right) {
    if (&right != this) {
        if (size != right.size) {
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
        }
        
        for (int i = 0; i < size; i++) {
            ptr[i] = right.ptr[i];
        }
    }
    
    return *this;
}

bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }
    
    for (int i = 0; i < size; i++) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    
    return true;
}

int &Array::operator[](int sub) {
    if (sub < 0 || sub >= size) {
        cerr << "Error: out of range" << endl;
        exit(1);
    }
    
    return ptr[sub];
}

int &Array::operator[](int sub) const {
    if (sub < 0 || sub >= size) {
        cerr << "Error: out of range" << endl;
        exit(1);
    }
    
    return ptr[sub];
}

ostream &operator<< (ostream & output, const Array & a) {
    int i;
    for (i = 0; i < a.size; i++) {
        output << setw(12) << a.ptr[i];
        
        if ((i + 1) % 5 == 0) {
            output << endl;
        }
    }
    
    if (i % 5 != 0) {
        output << endl;
    }
    
    return output;
}

istream &operator>> (istream & input, const Array & a) {
    for (int i = 0; i < a.size; i++) {
        input >> a.ptr[i];
    }
    return input;
}