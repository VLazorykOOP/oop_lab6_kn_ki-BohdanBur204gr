#include <iostream>
#include "Abstact_Class_Num.h"
#include "Family.h"
#include "virtualClass.h"
#include <string>
#include <iostream>

using namespace std;

void Test_one() {
    Normalization norm;
    int size = 4;   
    float* matri = new float[size];

    cout << "\nTest class matrix:\n";
    for (int i = 0; i < size; i++) {
        cout << "Input elment - " << i + 1 << ": ";
        cin >> matri[i];
    }

    Matrix_number* m = new Matrix_number(matri);

    
    norm.normalization(m);

    cout << "\nNormalized to divpaschoe from 0 to 1:\n";
    for (int i = 0; i < m->size; i++) {
        cout << matri[i] << endl;
    }
    
    cout << "\n\nTest class vector:\n";

    int size_v = 5;
    float* vec = new float[size_v];

     for (int i = 0; i < size_v; i++) {
        cout << "Input elment - " << i + 1 << ": ";
        cin >> vec[i];
    }

    Vector_number* v = new Vector_number(vec);


    norm.normalization(v);

    cout << "\nNormalization through the root of the number according to the condition\n";
    for (int i = 0; i < v->size; i++) {
        cout << vec[i] << endl;
    }

    cout << "\n\nTest class complex number:\n";

    int* tempINT;
    float* tempFLOAT;
    char* tempCHAR;
    cout << "Input complex number: ";
    Complex_number* c = new Complex_number();
    cout << "\nInput integer: ";
    cin >> c->complex_I;

    cout << "Input float number: ";
    cin >> c->complex_D;

    c->complex_ID = 'i';

    cout << *c << endl;

    float nr_compplex_n = norm.normalization(c);

    cout << "\nNormalized according to the condition of the problem, the real and imaginary\nparts are squared and then the root is taken from their sum" << endl
        << norm.normalization(c) << endl;
}

void TestTwo() {
    cout << "\nTest falmily: ";

    Children* children = new Children();
    children->printAllFamily();
}

void TestTree() {
    Inteface_Call* ic = new Inteface_Call(1);
    Virtual_END* vm = new Virtual_END();
    ic->CallClass(vm, ic->data);
}

void switch_test() {
    int task_n;
    cout << "Input task number: ";
    cin >> task_n;
    switch (task_n)
    {
    case 1:
        Test_one();
        cin;
        break;
    case 2:
        TestTwo();
        cin;
        break;
    case 3:
        TestTree();
        cin;
        break;
    default:
        break;
    }
}

int main()
{
    switch_test();
    cout << endl << "Press any key for close: " << endl;
    cin;
    return 0;
}