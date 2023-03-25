#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Unesite stranicu a " << endl;
	cin >> a;
	cout << "Unesite stranicu b " << endl;
	cin >> b; 
	cout << "Unesite stranicu c " << endl;
	cin >> c;
	if ((a * a) + (b * b) == (c * c))
	{
		cout << "DA" << endl;
	}
	else
	{
		cout << "NE" << endl;
	}
	return 0;
  
}

