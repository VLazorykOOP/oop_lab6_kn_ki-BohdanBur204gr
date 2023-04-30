#include "Family.h"
#include <string>
#include <iostream>

using namespace std;


Person::Person()
{
	this->age = 0.0;
	this->last_nama = "";
	this->name = "";
	this->data_birthday = "";
}

void Children::printAllFamily()
{
	cout << "\n------------------------------------------------\n"
		<< "\nMather:\n"
		<< "Age - " << perM->age << endl
		<< "Name - " << perM->name << endl
		<< "Last name - " << perM->last_nama << endl
		<< "Birthday - " << perM->data_birthday << endl;

	cout << "\nFather:\n"
		<< "Age - " << perF->age << endl
		<< "Name - " << perF->name << endl
		<< "Last name - " << perF->last_nama << endl
		<< "Birthday - " << perF->data_birthday << endl;

	cout << "\nChildren:\n"
		<< "Age - " << this->age << endl
		<< "Name - " << this->name << endl
		<< "Gender - " << this->gender << endl
		<< "Last name - " << this->last_nama << endl
		<< "Birthday - " << this->data_birthday << endl;
}

void Person::construct()
{
	cout << "\tInput name: ";
	cin >> this->name;
	cout << "\tInput last name: ";
	cin >> this->last_nama;
	cout << "\tInput age: ";
	cin >> this->age;
	cout << "\tInput data birthday: ";
	cin >> this->data_birthday;
}

Person::~Person()
{
	delete this;
}


Mather::Mather()
{
	cout << "\nMather Constructor\n";
	this->perM = new Person();
	perM->construct();
}

Mather::~Mather()
{
	delete this;
}




Father::Father()
{
	cout << "\nFather Constructor\n";
	this->perF = new Person();
	perF->construct();
}


Father::~Father()
{
	delete this;
}



Children::Children()
{
	bool temp_cheose_Lname = false;
	this->count_class++;
	cout << "\nChildren Constructor - " << this->count_class << endl;

	cout << "\tInput name: ";
	cin >> this->name;
	{
		cout << "\t\tThe last name of which of the child's parents (Mather = True or 1, Father = False or 0): ";
		cin >> temp_cheose_Lname;
		
		if (temp_cheose_Lname == true) this->last_nama = perM->last_nama;
		else this->last_nama = this->perF->last_nama;
	}
	cout << "\tChildren gender: ";
	cin >> this->gender;
	cout << "\tInput age: ";
	cin >> this->age;
	cout << "\tInput data birthday: ";
	cin >> this->data_birthday;
}

Children::~Children()
{
	this->count_class--;
	delete this;
}

