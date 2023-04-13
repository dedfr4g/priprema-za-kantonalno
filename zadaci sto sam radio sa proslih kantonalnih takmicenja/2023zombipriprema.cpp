#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, k;
	int i = 0;
	cin >> n;
	cin >> k;
	int suma = 0;
	vector<int> niz(n);
	for (int u = 0; u < n; u++)
	{
		cin >> niz[u];
	}
	for (i; i < n; i++)
	{
	
		if (niz[i] == -1)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				suma += niz[j];

			}
			break;

		}
	}
	
	if (suma <= k)
	{
		suma = 0;
		for (int p = i + 1; p < n; p++)
		{
			if (p < niz.size())
			{


				suma = 0;
				if (niz[p] == -1)
				{
					for (int t = p - 1; t > i; t--)
					{
						suma += niz[t];
					}
					if (suma > k)
					{
						break;
					}
					else
					{
						i = p;
						p++;
					}
				}
			}
			else
			{
				break;
			}
		}
		if (suma > k)
		{
			cout << "NE" << endl;
		}
		else if (suma <= k)
		{
			cout << "DA" << endl;
		}
	}
	else if(suma>k)
	{
		cout << "NE" << endl;
	}
	

	return 0;
}