// HW3 9.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;

class QuadraticEquation {
public: 
	QuadraticEquation(double d, double e, double f)
	{
		a = d;
		b = e;
		c = f;
	}
	double getA() {
		return a;
	}

	double getB()
	{
		return b;
	}

	double getC() {

		return c;
	}

	double getDiscriminant()
	{
		return pow(b, 2) - (4 * a * c);
	}

	double getRoot1()
	{
		if (pow(b, 2) - (4 * a * c) >= 0)
			return (-b + sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
		else
			return 0;
	}

	double getRoot2()
	{
		if (pow(b, 2) - (4 * a * c) >= 0)
			return (-b - sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
		else
			return 0;
	}

private:
	double a;
	double b;
	double c;


};


int main()
{
	double a;
	double b;
	double c;
	cout << "Enter the value for a, b, and c ";
	cin >> a;
	cin >> b;
	cin >> c;

	QuadraticEquation o1(a, b, c);
	if (o1.getDiscriminant() > 0) {


		cout << "Root 1 is " << o1.getRoot1() << endl;
		cout << "Root 2 is " << o1.getRoot2() << endl;
	}
	if (o1.getDiscriminant() == 0)
	{
		cout << "Root 1 is " << o1.getRoot1();
	}
	if (o1.getDiscriminant() < 0)
	{
		cout << "The equation has no real roots ";
	}
    return 0;
}

