#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor(string n = "", int i = 0, string dept = "", int exp = 0)
        : Person(n, i), department(dept), experienceYears(exp) {
    }

    void display() const override {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << " years" << endl;
    }
};

#endif
