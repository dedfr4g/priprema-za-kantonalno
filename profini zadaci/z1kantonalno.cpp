#include <iostream>
using namespace std;

int main() 
{
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
		cout << "Broj bez cifre desetice je " << a % 10 << endl;
	}
    return 0;
}