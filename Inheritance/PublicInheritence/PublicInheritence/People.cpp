//
//  People.cpp
//  PublicInheritence
//
//  Created by Leo Peng on 4/13/16.
//  Copyright © 2016 Leo Peng. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace std;

People::People(const string & first, const string & last, int id, BirthDay day) {
    firstName = first;
    lastName = last;
    idNum = id;
    birthday = day;
}

void People::setFirstName(const string & first) {
    firstName = first;
}

void People::setLastName(const string & last) {
    lastName = last;
}

void People::setIdNum(int id) {
    idNum = id;
}

void People::setBirthDay(const BirthDay day) {
    birthday = day;
}

void People::print() {
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getIdNum() << endl;
    cout << "BirthDay: " << getBirthDay().year << '-' << getBirthDay().month << '-' << getBirthDay().day << endl;
}

string People::getName() {
    return getFirstName() + " " + getLastName();
}

string People::getFirstName() {
    return firstName;
}

string People::getLastName() {
    return lastName;
}

BirthDay People::getBirthDay() {
    return birthday;
}

int People::getIdNum() {
    return idNum;
}