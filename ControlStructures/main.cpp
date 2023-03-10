//ControlStructures
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	double a, b;
	char s;
	switch (s)
	{
	case '+': cout << a << " + " << b << "=" << a + b << endl; break;
	case '-': cout << a << " - " << b << "=" << a - b << endl; break;
	case '*': cout << a << " * " << b << "=" << a * b << endl; break;
	case '/': cout << a << " / " << b << "=" << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}

}