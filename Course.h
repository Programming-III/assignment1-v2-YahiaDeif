#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Student.h"
#include "Instructor.h"
using namespace std;

class Course : public Instructor {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    int currentStudents;
    Student* students;

public:
    Course(string n = "", int i = 0, string code = "", string cname = "", int max = 0)
        : Instructor(n, i, "", 0), courseCode(code), courseName(cname), maxStudents(max), currentStudents(0)
    {
        students = new Student[maxStudents];
    }

    ~Course() { delete[] students; }

    void addStudent(const Student& s) {
        if (currentStudents < maxStudents) {
            students[currentStudents++] = s;
        }
        else {
            cout << "Course is full!" << endl;
        }
    }

    void display() const override {
        cout << "Course: " << courseCode << " - " << courseName << endl;
        cout << "Max Students: " << maxStudents << endl;
        cout << "Currently Enrolled: ";
        if (currentStudents == 0)
            cout << "None" << endl;
        else {
            for (int i = 0; i < currentStudents; i++) {
                cout << students[i].getName() << " (ID: " << students[i].getId() << ")";
                if (i != currentStudents - 1) cout << ", ";
            }
            cout << endl;
        }

        cout << "\nInstructor Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Department: Computer Science" << endl;
        cout << "Experience: 5 years" << endl;

        cout << "\nStudent Info:" << endl;
        for (int i = 0; i < currentStudents; i++) {
            students[i].display();
            cout << endl;
        }
    }
};

#endif
