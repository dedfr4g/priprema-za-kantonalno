#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char znak;
	cout << "Unesi prvi broj" << endl;
	cin >> a;
	cout << "Unesi drugi broj" << endl;
	cin >> b;
	cout << "Unesi operator operacije koje zelis izvrsiti sa ova dva broja (+,-,/,*)" << endl;
	cin >> znak;
	if (znak == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	if (znak == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	if (znak == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	if (znak == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}

	return 0;
  
}

