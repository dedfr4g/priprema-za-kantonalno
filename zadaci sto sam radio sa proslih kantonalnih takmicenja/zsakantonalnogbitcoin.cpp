#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<float> cijenabtc(n);
	for (int u=0; u < n; u++)
	{
		cin >> cijenabtc[u];
	}
	if (n > 3)
	{


		float prvanajmanja = *min_element(cijenabtc.begin(), cijenabtc.end() - 2);
		float prvikorak = 10 / prvanajmanja;
		float trebanaci = prvanajmanja;
		auto it = find(cijenabtc.begin(), cijenabtc.end(), trebanaci);
		__int64 index = distance(cijenabtc.begin(), it);
		auto startaj = next(cijenabtc.begin(), index);
		float najveci = *max_element(startaj, cijenabtc.end() - 1);
		float drugikorak = najveci * prvikorak;
		float trebanacidrugi = najveci;
		auto itdva = find(cijenabtc.begin(), cijenabtc.end(), trebanacidrugi);
		__int64 drugiindex = distance(cijenabtc.begin(), itdva);
		auto startajdva = next(cijenabtc.begin(), drugiindex);
		float druganajmanja = *min_element(startajdva, cijenabtc.end());
		float trecikorak = drugikorak / druganajmanja;
		cout << trecikorak << endl;
	}
	else if (n == 3)
	{
		float prvanajmanja = *min_element(cijenabtc.begin(), cijenabtc.end() - 2);
		float prvikorak = 10 / prvanajmanja;
		float drugikorak = prvikorak * cijenabtc[1];
		float trecikorak = drugikorak / cijenabtc[2];
		cout << trecikorak << endl;
	}
	return 0;
}
