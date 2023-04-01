#include<iostream>
#include<string>

using namespace std;

int main()
{
	int brojacsg = 0;
	int brojacpr = 0;
	int brojacsu = 0;
	string tekst;
	cout << "Unesi tekst" << endl;
	getline(cin,tekst);
	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i]==' ')
		{
			brojacpr++;
			
		}
		else if (tekst[i] == 'A' || tekst[i] == 'a' || tekst[i] == 'E' || tekst[i] == 'e' || tekst[i] == 'I' || 
			tekst[i] == 'i' || tekst[i] == 'O' || tekst[i] == 'o' || tekst[i] == 'U' || tekst[i] == 'u')
		{
			brojacsg++;
		}
		else if (tekst[i] >= 'a' && tekst[i] <= 'z' || tekst[i] >= 'A' && tekst[i] <= 'Z')
		{
			brojacsu++;
		}
	}
	cout << " " << endl;
	cout << "Samoglasnika je " << brojacsg << endl;
	cout << "Suglasnika je " << brojacsu << endl;
	cout << "Praznina je " << brojacpr << endl;
	return 0;
}