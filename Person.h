#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int id;

public:

	void display() {

		cout << "name is: " << name << "id is: " << id << endl;

	}

};
#endif
