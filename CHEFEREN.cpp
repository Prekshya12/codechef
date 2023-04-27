#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b,i;
	cin>>t;
	while(t--){
	    int ans=0;
	    cin>>n>>a>>b;
	    
	    if(n==1)
	    cout<<b<<endl;
	    else{
	       for(i=2;i<=n;i++)
	       {
	           if((i%2)==0)
	           ans=ans+a;
	           else
	           ans=ans+b;
	       }
	       cout<<(ans+b)<<endl;
	    }
	}
	
	return 0;
}
