//
//  Student.cpp
//  PublicInheritence
//
//  Created by Leo Peng on 4/13/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include "Student.h"

using namespace std;

Student::Student(const string & first, const string & last, int id, BirthDay day, const string & sname):People(first, last, id, day) {
    schoolName = sname;
}

void Student::setSchoolName(const string & name){
    schoolName = name;
}

void Student::print() {
    People::print();
    cout << "SchoolName: " << schoolName << endl;
}