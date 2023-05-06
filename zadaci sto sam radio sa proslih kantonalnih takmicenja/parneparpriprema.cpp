#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int broj,brojac=0;
	vector<int>parni;
	vector<int>neparni;
	vector<int>niz;
	cin >> broj;
	int privr = broj;
	while (broj != 0)
	{
		int zadnji = broj % 10;
		niz.insert(niz.begin(),zadnji);
		broj = (broj - zadnji) / 10;
	}
	while (privr != 0)
	{
		privr = privr / 10;
		brojac++;
	}
	for (int i = 0; i < brojac; i++)
	{
		if (niz[i] % 2 == 0)
		{
			parni.insert(parni.begin(), niz[i]);
		}
		else
		{
			neparni.insert(neparni.begin(), niz[i]);
		}
	}
	for (int j = parni.size()-1; j>=0; j--)
	{
		cout << parni[j];
	}
	cout << " " << endl;
	for (int k = 0; k < neparni.size(); k++)
	{
		cout << neparni[k];
	}

	return 0;
	
}