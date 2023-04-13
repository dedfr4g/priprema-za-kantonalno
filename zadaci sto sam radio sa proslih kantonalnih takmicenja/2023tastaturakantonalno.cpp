#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	int n;
	bool provjera = true;
	cin >> n;
	cin >> a;
	
	for (int j = 1; j < n; j += 3)
	{
		if (a[j] == a[j + 1])
		{
			provjera = true;
		}
		else
		{
			provjera = false;
			break;
		}
	}
	if (provjera)
	{
		cout << "DA" << endl;
	}
	else
	{
		cout << "NE" << endl;
	}
	return 0;
}