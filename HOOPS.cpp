#include <iostream>
using namespace std;

int main() {
int t,n;
cin>>t;
while(t--)
{
cin>>n;
if(n=1)
{
    cout<<n;
}
else if(n%2!=0){
    n=n-1;
    cout<<n;
}
}
	return 0;
}
