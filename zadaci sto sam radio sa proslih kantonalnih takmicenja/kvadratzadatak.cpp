#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int suma = 0;
	vector<int>prvired(3);
	vector<int>drugired(3);
	vector<int>trecired(3);
	for (int p = 0; p < 3; p++)
	{
		cin >> prvired[p];
	}
	cout << " " << endl;
	for (int d = 0; d < 3; d++)
	{
		cin >> drugired[d];
	}
	cout << " " << endl;
	for (int t = 0; t < 3; t++)
	{
		cin >> trecired[t];
	}
	if (prvired[0] == 0 || prvired[1] == 0 || prvired[2] == 0 && drugired[0] == 0 || drugired[1] == 0 || drugired[2] == 0 &&
		trecired[0] == 0 || trecired[1] == 0 || trecired[2] == 0)
	{
		suma = ((prvired[0] + prvired[1] + prvired[2]) + (drugired[0] + drugired[1] + drugired[2]) + (trecired[0] + trecired[1] + trecired[2])) / 2;
	}
	else
	{

		for (int i = 0; i < 3; i++)
		{
			if (prvired[i] != 0)
			{
				suma = prvired[0] + prvired[1] + prvired[2];

			}
			if (drugired[i] != 0)
			{
				suma = drugired[0] + drugired[1] + drugired[2];

			}
			if (trecired[i] != 0)
			{
				suma = trecired[0] + trecired[1] + trecired[2];

			}
		}
		for (int t = 0; t < 3; t++)
		{
			if (prvired[t] == 0)
			{
				prvired[t] = suma - (prvired[0] + prvired[1] + prvired[2]);
			}
			if (trecired[t] == 0)
			{
				trecired[t] = suma - (trecired[0] + trecired[1] + trecired[2]);
			}
			if (drugired[t] == 0)
			{
				drugired[t] = suma - (drugired[0] + drugired[1] + drugired[2]);
			}
		}
	}

	cout << prvired[0] << " " << prvired[1] << " " << prvired[2] << endl;
	cout << drugired[0] << " " << drugired[1] << " " << drugired[2] << endl;
	cout << trecired[0] << " " << trecired[1] << " " << trecired[2] << endl;
	return 0;
}