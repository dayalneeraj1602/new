#include <iostream>
using namespace std;
int main() 
{
int t,x,y,z;
cin>>t;
while(t--)
{
cin>>x>>y>>z;
x=400/x;
y=400/y;
z=400/z;
if(x>y && x>z)
{
    cout<<"ALICE"<<endl;
    
}
else if(y>x && y>z)
{
    cout<<"BOB"<<endl;
}
else
{cout<<"CHARLIE"<<endl;
}
	
}
}
