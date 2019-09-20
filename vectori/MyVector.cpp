
#include "stdafx.h"
#include <iostream>
#include "MyVector.h"

using namespace std;

MyVector::MyVector(int n)
{
	dim = n;
	elemente = new int[dim];
}

MyVector::~MyVector()
{
	delete[] elemente;
}

istream& operator>>(istream& flux, MyVector& some)
{
	
	for (int i = 0; i < some.dim; i++)
		flux >> some.elemente[i];
	return flux;
}

ostream& operator<<(ostream& flux, MyVector& some)
{
	for (int i = 0; i < some.dim; i++)
		flux << some.elemente[i];
	return flux;
}
