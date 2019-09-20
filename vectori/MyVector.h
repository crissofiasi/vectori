#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class MyVector {
private:
	int dim;
	int *elemente;
public:
	MyVector(int n);
	~MyVector();
	friend istream& operator>>(istream& flux, MyVector& some);
	friend ostream& operator<<(ostream& flux, MyVector& some);

};