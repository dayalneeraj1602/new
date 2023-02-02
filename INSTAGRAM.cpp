#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	
	while(T--)
	{  cin>>X>>Y;
	   if (X>Y*10)
	   {
	       cout<<"YES"<<endl;
	   }
	   else
	   {
	       cout<<"NO"<<endl;
	   }

	}
	return 0;
}
