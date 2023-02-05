#include <iostream>
using namespace std;
int main() {
int t,x,y;
cin>>t;
while(t--)
{
cin>>x>>y;
if(x==y)
{if( x==0 && y==0 )
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
}}
else
{
    cout<<"NO"<<endl;
}
}
	return 0;
}
