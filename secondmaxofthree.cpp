#include <iostream>
using namespace std;

int main() {
int t,n,x,y,z;
cin>>t;
while(t--)
{
cin>>x>>y>>z;
if(y>x && x>z || z>x && x>y)
{
    cout<<x<<endl;
}
else if(x>y && y>z || z>y && y>x)
{
    cout<<y<<endl;
}
else if(x>z && z>y || y>z && z>x)
{
    cout<<z<<endl;
}
}
}

