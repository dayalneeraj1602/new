#include <iostream>
using namespace std;
int main() {
int t,n,x,y;
cin>>t;
while(t--)
{
cin>>x>>y;
if(x<y)
{
    cout<<"0"<<endl;
}
else{
    x=x-y;
    cout<<x<<endl;
}}
	return 0;
}
