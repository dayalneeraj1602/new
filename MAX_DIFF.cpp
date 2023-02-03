#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s;        //n->max tastiness
	                    // s->sum of tastiness
	    cin>>n>>s;
	    int abd;  //absolute difference
	    if(n>=s)        //if max tastiness is greater which means other term must be zero.
            abd=s;      // so the difference will be the non zero term or "s"
        else
            abd=n-(s-n); // consider (s-n) as the other term of pair and difference of that 
                        // two terms give us our answer
         cout<<abd<<endl;               
	}
	return 0;
}