#include "virtualClass.h"
#include <iostream>

using namespace std;

Inteface_Call::Inteface_Call(int data)
{
	this->data = data;
}

void Inteface_Call::CallClass(Interface_Virtual_Class* ivc, int data)
{
	ivc->CallClass(data);
}






Virtual_Main::Virtual_Main()
{
	cout << endl << endl << "Created class Mani:" << this << endl;
}

Virtual_Main::~Virtual_Main()
{
	cout << endl << "Call destructor class of Main" << endl
		<< "----------------------------------------------------" << endl;
}

int Virtual_Main::CallClass(int d)
{
	if (this->data == nullptr) { data = new int; }
	*data = d;
	cout 
		<< endl << endl << "Created class Mani:"
		<< endl << "Link - " << this << endl << "Data - " << *data
		<< endl << "Link data - " << data;
	return *data;
}






Virtual_One::Virtual_One()
{
	cout << endl << endl << "Created class Virtual_One:" << this << endl; 
}

Virtual_One::~Virtual_One()
{
	cout << endl << "Call destructor class of Virtual_One" << endl
		<< "----------------------------------------------------" << endl;
}

int Virtual_One::CallClass(int d)
{
	if (this->data == nullptr) { data = new int; }
	*data = Virtual_Main::CallClass(d);
	cout << endl << "Data - " << *data
		<< endl << "Link data - " << data;
	return *data;
}




Virtual_Two::Virtual_Two()
{
	cout << endl << endl << "Created class Virtual_Two: " << this << endl;
}

Virtual_Two::~Virtual_Two()
{
	cout << endl << "Call destructor class of Virtual_Two" << endl
		<< "----------------------------------------------------" << endl;
}

int Virtual_Two::CallClass(int d)
{
	if (this->data == nullptr) { data = new int; }
	*data = Virtual_Main::CallClass(d);
	cout << endl << endl << "Created class Virtual_Two:"
		<< endl << "Link - " << this
		<< endl << "Data - " << *data
		<< endl << "Link data - " << data;
	return *data;
}


 

Virtual_Three::Virtual_Three()
{
	cout << endl << endl << "Created class Virtual_Three: "  << this << endl;
}

Virtual_Three::~Virtual_Three()
{
	cout << endl << "Call destructor class of Virtual_Three" << endl
		<< "----------------------------------------------------" << endl;
}

int Virtual_Three::CallClass(int d)
{
	if (this->data == nullptr) { data = new int; }
	*data = Virtual_One::CallClass(d) + Virtual_Two::CallClass(d);

	cout << endl << endl << "Created class Virtual_Three:"
		<< endl << "Link - " << this
		<< endl << "Data - " << *data
		<< endl << "Link data - " << data;
	return *data;
}





Virtual_END::Virtual_END()
{
	cout << endl << endl << "Created class Virtual_END: " << this << endl ;
}

Virtual_END::~Virtual_END()
{
	cout << endl << "Call destructor class of Virtual_END" << endl
		<< "----------------------------------------------------" << endl;
}

int Virtual_END::CallClass(int d)
{
	if (this->data == nullptr) { data = new int; }
	*data = Virtual_Three::CallClass(d) + Virtual_Two::CallClass(d);

	cout << endl << endl << "Created class Virtual_END:"
		<< endl << "Link - " << this
		<< endl << "Data - " << *data
		<< endl << "Link data - " << data;

	return *data;
}