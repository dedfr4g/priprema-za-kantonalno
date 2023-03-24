#include<iostream>
using namespace std;
int main()
{
	// U zadatku pise n<=10 to je valjda greska treba biti n>=10 jer brojevi ispod 10 nemaju cifre desetice...
	int a;
	pocetak:
	cout << "Unesi prirodan broj " << endl;
	cin >> a;
	if (a >= 100 || a < 10)
	{
		cout << "Pogresan broj,ponovite" << endl;
		goto pocetak;
	}
	else
	{
		cout << "Cifra desetica je " << a / 10 << endl;
	}
	return 0;
}