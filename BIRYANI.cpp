#include <iostream>
using namespace std;

int main()
{
	int t, x, y;
	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		x = x * y;
		cout << x << endl;
	}
	return 0;
}
