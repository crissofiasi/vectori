// vectori.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MyVector.h";

using namespace std;


int main()
{
	int n;
	cout << "n=";
	cin >> n;
	MyVector vect(n);
	cin >> vect;
	cout << vect<<endl;
	system("pause");
    return 0;
}

/*

1.scrieti un constructor de copiere pt clasa MyVector
2.se da un sir de mai multi vectori; sa se afiseze elementul maxim din fiecare dintre vectorii dati( se va folosi o metoda sau sort)
3.consideram mai multi vectori dintr fis text. afis primul vect care are nirma pare si ultimulu vect care are norma para (sqrt(e[i]*e[i])/
*/