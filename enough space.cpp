#include <iostream>
using namespace std;

int main() {
int t,n,x,y;
cin>>t;
while(t--)
{
cin>>n>>x>>y;
x=x+2*y;
if(x<=n)
{cout<<"YES"<<endl;
}
else
{cout<<"NO"<<endl;
}
}
	return 0;
}
