#include<iostream>
#include <string>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
	string a;
	int n;
	cin >> n;
	vector<int> skladistenje(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		stringstream ss(a);
		int prvi, drugi;
		char oper;
		ss >> prvi >> oper >> drugi;
		int b = prvi + drugi;
		skladistenje.insert(skladistenje.begin(), b);
	}
	for (int i = n-1; i >= 0; i--)
	{
		cout << skladistenje[i] << endl;
	}
	return 0;
}