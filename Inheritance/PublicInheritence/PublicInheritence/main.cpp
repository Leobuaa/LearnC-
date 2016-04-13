//
//  main.cpp
//  PublicInheritence
//
//  Created by Leo Peng on 4/13/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include <iostream>
#include "People.h"
#include "Student.h"

using namespace std;

int main(int argc, const char * argv[]) {
    People p1 = People("Leo", "Peng", 1221, BirthDay(1994, 06, 17));
    p1.print();
    People p2 = People("Cecilia", "Liu", 2222, BirthDay(1987, 03, 10));
    p2.print();
    p2.setIdNum(66666);
    p2.setFirstName("SHISHI");
    p2.setLastName("LIU");
    p2.print();
    Student s1 = Student("Leo", "Peng", 1221, BirthDay(1994, 6, 17), "Beihang University");
    s1.print();
    
    s1.setSchoolName("Another University");
    s1.setIdNum(6666666);
    
    s1.print();
    return 0;
}
