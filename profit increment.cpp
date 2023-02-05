#include<iostream>
using namespace std;
int main() {
int t,x,y;
cin>>t;
while(t--)
{
cin>>x>>y;
x=x/10;
y=y+x;
cout<<y<<endl;
}
	return 0;
}
