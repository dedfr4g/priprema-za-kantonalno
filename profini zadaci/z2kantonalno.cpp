#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	bool iskaz = true;
	int brojac = 0;
	int a, sumacifara,b;
	cout << "Unesite broj a" << endl;
	cin >> a;
	cout << "Unesite broj b" << endl;
	cin >> b;
	for (int j = a; j <= b; j++)
	{
		sumacifara = (j / 10) + (j % 10);

		for (int i = 2; i < sumacifara; i++)
		{
			if (sumacifara % i == 0)
			{
				iskaz = false;
				break;
			}
			else
			{
				iskaz = true;
			}


		}
		if (iskaz)
		{
			brojac++;
			
		}
	}
	cout << " " << endl;
	cout << "Izmedju brojeva " << a << " i " << b << ", " << brojac << " je brojeva da im je suma cifara prost broj." << endl;

	return 0;

}

