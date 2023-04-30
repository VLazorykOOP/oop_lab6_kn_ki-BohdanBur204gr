#include "Abstact_Class_Num.h"
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

Complex_number :: Complex_number() {
	complex_D = 0;
	complex_I = 0.0;
	complex_ID = 'i';
}

Complex_number::Complex_number(int CD) : Complex_number() {
	complex_D = CD;
}

Complex_number::Complex_number(int CD, float CI) : Complex_number(CD) {
	complex_I = CI;
}

Complex_number::Complex_number(int CD, float CI, char CID) : Complex_number(CD, CI) {
	complex_ID = CID;
}

float Complex_number :: normalization(){ 
	 float model_complex_number = 
		 pow(this->complex_D, 2) + 
		 pow(this->complex_I, 2);
	 float sqrt_MCN = sqrt(model_complex_number);
	 return sqrt_MCN;
}

ostream& operator<<(ostream& os, Complex_number& f)
{
	os << f.complex_D << " + " << float(f.complex_I) << f.complex_ID;
	return os;
}






Vector_number::Vector_number() {
	for (int i = 0; i < this->size; i++) {
		this->vec_num[i] = 0.0;
	}
}

Vector_number::Vector_number(float *vec) {
	this->size = _msize(vec) / sizeof(float);
	delete this->vec_num;
	this->vec_num = new float[this->size];
	this->vec_num = vec;
}

float Vector_number::normalization() {
	for (int i = 0; i < this->size; i++) {
		this->vec_num[i] = sqrt(this->vec_num[i]);
	}
	return 0.0;
}





Matrix_number::Matrix_number() {
	for (int i = 0; i < 4; i++) {
		this->mat_num[i] = 0.0;
	}
}

Matrix_number::Matrix_number(float *mat) {
	this->size = _msize(mat) / sizeof(float);
	delete this->mat_num;
	this->mat_num = new float[this->size];
	this->mat_num = mat;
}

float Matrix_number::normalization() {
	for (int i = 0; i < this->size; i++) {
		while ((int)this->mat_num[i] != 0) this->mat_num[i] *= 0.10;
	}
	return 0.0;
}





float Normalization::normalization(Abstact_Class_Num* n) {
	float res = n->normalization();
	return res;
}
