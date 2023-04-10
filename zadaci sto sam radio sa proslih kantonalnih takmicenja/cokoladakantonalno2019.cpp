#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int r, k;
	cin >> r >> k;
	string rijec;
	int broj;
	vector<int>skladistenje(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> broj >> rijec;
		if (rijec == "stupaca")
		{
			k = k - broj;
			skladistenje.insert(skladistenje.begin(), r * broj);
		}
		else
		{
			r = r - broj;
			skladistenje.insert(skladistenje.begin(), k * broj);
		}
	}
	cout << " " << endl;
	for (int i = 2; i >= 0; i--)
	{
		cout << skladistenje[i] << endl;
	}
	return 0;
}