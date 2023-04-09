#include<iostream>
using namespace std;

int main()
{
	int r, k;
	cin >> r >> k;
	int prvi, drugi, treci;
	string prvarijec, drugarijec, trecarijec;
	cin >> prvi >> prvarijec;
	cin >> drugi >> drugarijec;
	cin >> treci >> trecarijec;
	if (prvarijec == "stupaca")
	{
		k = k - prvi;
		prvi = r * prvi;
	}
	if (prvarijec == "redova")
	{
		r = r - prvi;
		prvi = k * prvi;
	}
	if (drugarijec == "stupaca")
	{
		k = k - drugi;
		drugi = r * drugi;
	}
	if (drugarijec == "redova")
	{
		r = r - drugi;
		drugi = k * drugi;
	}if (trecarijec == "stupaca")
	{
		k = k - treci;
		treci = r * treci;
	}
	if (trecarijec == "redova")
	{
		r = r - treci;
		treci = k * treci;
	}
	cout << " " << endl;
	cout << prvi << endl;
	cout << drugi << endl;
	cout << treci << endl;
	
	
	return 0;
}