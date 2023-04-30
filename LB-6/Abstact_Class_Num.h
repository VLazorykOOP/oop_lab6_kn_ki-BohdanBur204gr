#pragma once
#include <string>

using namespace std;

class Abstact_Class_Num
{
public:
	virtual float normalization() = 0;
};


class Complex_number : public Abstact_Class_Num {
public:
	int complex_D;
	float complex_I;
	char complex_ID;

	Complex_number();
	Complex_number(int CD);
	Complex_number(int CD, float CI);
	Complex_number(int CD, float CI, char CID);

	float normalization() override;
	friend ostream& operator<< (ostream& os, Complex_number& f);
};


class Vector_number : public Abstact_Class_Num {
public:
	int size = 10;
	float *vec_num = new float[size];

	Vector_number();
	Vector_number(float *vec);

	float normalization() override;
};


class Matrix_number : public Abstact_Class_Num {
public:
	int size = 2;
	float *mat_num = new float[size];

	Matrix_number();
	Matrix_number(float *mat);

	float normalization() override;
};


class Normalization {
public:
	float normalization(Abstact_Class_Num *n);
};