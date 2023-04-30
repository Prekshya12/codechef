#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n<=2)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(n%2==0)
	    {
	        cout<<((3*(n/2))-3)<<endl;
	    }
	    else
	    {
	        cout<<((3*(n/2))-1)<<endl;
	    }
	    
	}
	return 0;
}
