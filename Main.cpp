#include <iostream>
#include "MyLib.h"

using namespace std;
using namespace MyLib;
#define EnterNumb int a;\
cout << "Enter your numb: ";\
cin >> a;

#define examination(b) if (a >= 0 and a < b)\
{\
cout << "True" << endl;\
}\
else\
{\
cout << "False" << endl;\
}


int main()
{
	cout << "Quest_1: " << endl;
	const int size = 5;
	float data = 0.0f;
	int neg = 0, pos = 0;
	float arr[size] = {1.3f, 2.26f, 3.454f, 34.142f, 5.555f};

	Init(arr, size, data);

	Print(arr, size, data);

	Numb(arr, size, data, neg, pos);
	
	cout << endl;
	cout << "----------------------------" << endl;
	cout << "Quest_2: " << endl;

	EnterNumb;

	examination(100);

	
	return 0;
};

