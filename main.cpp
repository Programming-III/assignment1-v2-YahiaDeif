#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

int main() {
   
    Student s1("Omar Nabil", 2202, 2, "Informatics");

    
    Course c1("Dr. Lina Khaled", 5001, "CS101", "Introduction to Programming", 3);
    c1.addStudent(s1);

    
    c1.display();

    return 0;
}
