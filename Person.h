#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id;

public:
    Person(string n = "", int i = 0) : name(n), id(i) {}

    virtual void display() const {
        cout << "Name: " << name << " (ID: " << id << ")" << endl;
    }

    string getName() const { return name; }
    int getId() const { return id; }
};

#endif
