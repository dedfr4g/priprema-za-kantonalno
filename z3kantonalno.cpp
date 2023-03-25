#include<iostream>
using namespace std;

int main()
{
	//Pretpostavio sam za brojeve sa 2 cifre, moglo se i uraditi za trocifrene ali u zadatku nije definisano koji se trebaju unositi
	int a, b;
	cin >> a >> b;
	int uzorak = 0;
	for (int i = a*b; i >=1; i--)
	{
		if (a % i == 0 && b % i == 0 )
		{
			
			uzorak = i;
			break;
		}
	}
	int sumacifaraA = (a / 10) + (a % 10);
	int sumacifaraB = (b / 10) + (b % 10);
	if (uzorak % sumacifaraA == 0)
	{
		cout << "Najveci zajednicki djelioc ova dva broja dijeli sumu cifre od prvog broja" << endl;
	}
	else {
		cout << "Najveci zajednicki djelioc ova dva broja ne dijeli sumu cifre od prvog broja" << endl;
	}
	if (uzorak % sumacifaraB == 0)
	{
		cout << "Najveci zajednicki djelioc ova dva broja dijeli sumu cifre od drugog broja" << endl;
    }
	else {
		cout << "Najveci zajednicki djelioc ova dva broja ne dijeli sumu cifre od drugog broja" << endl;
	}
	return 0;
}