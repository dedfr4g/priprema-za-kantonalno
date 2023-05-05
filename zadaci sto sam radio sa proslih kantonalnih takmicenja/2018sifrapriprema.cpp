#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int duzinasifre,duzsifre,brojac=0;
	string sifra,pokusaj,uzorak;
	cin >> duzinasifre;
	cin >> sifra;
	cin >> duzsifre;
	cin >> pokusaj;

	for (int i = 0; i < duzsifre; i++)
	{
		uzorak = "";
		if (i > (duzsifre - duzinasifre))
		{
			break;
		}
		else
		{
			for (int j = 0; j < duzinasifre; j++)
			{
				uzorak += pokusaj[i + j];

			}
			if (uzorak == sifra)
			{
				brojac++;
			}
		}
	}
	cout << brojac << endl;
	return 0;
}