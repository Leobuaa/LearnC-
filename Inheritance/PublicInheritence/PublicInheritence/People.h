//
//  People.h
//  PublicInheritence
//
//  Created by Leo Peng on 4/13/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#ifndef People_h
#define People_h
#include <iostream>
#include <string>

using namespace std;

struct BirthDay {
    int year;
    int month;
    int day;
    BirthDay(int y, int m, int d) : year(y), month(m), day(d) {}
};

class People {
public:
    People (const string &, const string &, int, BirthDay);
    
    void setFirstName(const string &);
    void setLastName(const string &);
    void setBirthDay(const BirthDay);
    void setIdNum(int);
    void print();
    
    string getName();
    string getFirstName();
    string getLastName();
    BirthDay getBirthDay();
    int getIdNum();
    
protected:
    string firstName;
    string lastName;
    int idNum;
    BirthDay birthday = BirthDay(1900, 1, 1);
};

#endif /* People_h */
