#include <iostream>
using namespace std;

int	main(void)
{
	int	a, b, c, d, quo, prod, ad, subs;

	cout << "Enter first number: \n";
	cin >> a;
	cout << "Enter second number: \n";
	cin >> b;
	cout << "Enter third number: \n";
	cin >> c;
	cout << "Enter fourth number: \n";
	cin >> d;

	quo = a / b;
	prod = b * c;
	ad = a + b + c + d;
	subs = a - b - c - d;

	cout << "Quotien = " << quo;
	cout << "\nProduct = " << prod;
	cout << "\nAddition = " << ad;
	cout << "\nSubstraction = " << subs;

	return (0);
}