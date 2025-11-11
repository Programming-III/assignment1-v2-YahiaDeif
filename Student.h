#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int yearLevel;
    string major;

public:
    Student(string n = "", int i = 0, int y = 0, string m = "")
        : Person(n, i), yearLevel(y), major(m) {
    }

    void display() const override {
        cout << "Name: " << name << endl;
        cout << "Year: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};

#endif
