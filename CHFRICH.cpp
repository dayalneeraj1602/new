#include <iostream>
using namespace std;

int main()
{
	int t, a, b, x;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> x;
		b = b - a;
		b = b / x;
		cout << b << endl;
	}
	return 0;
}
