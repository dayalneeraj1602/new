#include <iostream>
using namespace std;

int main() {
int t,d,l,r;
cin>>t;
while(t--)
{
cin>>d>>l>>r;
if(d<l && d<r)
{
    cout<<"Too Early"<<endl;
}
else if(d>l && d>r)
{
    cout<<"Too Late "<<endl;
    }
else     
{
    cout<<"Take second dose now"<<endl;
}
}
	return 0;
}
