#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Unesite prvi broj " << endl;
	cin >> a;
	cout << "Unesite drugi broj " << endl;
	cin >> b; 
	cout << "Unesite treci broj " << endl;
	cin >> c;
	if (a + b > b + c && a + b > a + c)
	{
		cout << a << " i " << b << "  formiraju najvecu sumu" << endl;
	}
	else if (a + c > a + b && a + c > b + c)
	{
		cout << a << " i " << c << "  formiraju najvecu sumu" << endl;
	}
	else if (b + c > a + b && b + c > a + c)
	{
		cout << b << " i " << c << "  formiraju najvecu sumu" << endl;
	}
	return 0;
  
}

