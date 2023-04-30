#pragma once
#include <string>

using namespace std;

class Person {
public:
	float age;
	string name;
	string last_nama;
	string data_birthday;

	Person();
	~Person();

	void construct();
};

class Father : public Person {
public:
	Person* perF;

	Father();
	~Father();

private:
	int count_class = 0;
};

class Mather : public Person {
public:
	Person* perM;

	Mather();
	~Mather();

private:
	int count_class = 0;
};


class Children:Person, Mather, Father
{
public:
	float age;
	string name;
	string gender;
	string last_nama;
	string data_birthday;

	Children();
	~Children();

	void printAllFamily();

private:
	int count_class = 0;
};

