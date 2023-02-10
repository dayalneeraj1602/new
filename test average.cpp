#include <iostream>
using namespace std;
int main() {
float t,a,b,c,x,y,z;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
x=(a+b)/2;
y=(b+c)/2;
z=(c+a)/2;
if( x<35 || y<35 || z<35 )
{
    cout<<"Fail"<<endl;
}
else
{
    cout<<"Pass"<<endl;
}
}
return 0;
}
