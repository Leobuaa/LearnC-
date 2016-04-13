//
//  Student.hpp
//  PublicInheritence
//
//  Created by Leo Peng on 4/13/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <iostream>
#include "People.h"

using namespace std;

class Student : public People {
public:
    Student(const string &, const string &, int, BirthDay, const string &);
    
    void setSchoolName(const string &);
    void print();
    
private:
    string schoolName;
};

#endif /* Student_hpp */
