//
//  Array.hpp
//  Array
//
//  Created by Leo Peng on 4/14/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <iostream>
using namespace std;

class Array {
    friend ostream &operator<< (ostream &, const Array &);
    friend istream &operator>> (istream &, const Array &);
public:
    Array(int = 10);
    Array(const Array &);
    ~Array();
    int getSize() const;
    
    const Array &operator=(const Array &);
    bool operator==(const Array &) const;
    int &operator[](int);
    int &operator[](int) const;
    
private:
    int size;
    int *ptr;
};


#endif /* Array_hpp */
