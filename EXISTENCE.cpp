#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int x,y;
	    cin>>x>>y;
	    long long a=(x*x*x*x)+(4*y*y);
	    long long b=(4*x*x*y);
	    if(a==b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
