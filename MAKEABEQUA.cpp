#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long A[n];
	    long long B[n];
	    long long C[n];
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>B[i];
	        
	    }
	    long long max=0;
	    long long sum=0;
	    for(int i=0;i<n;i++){
	        C[i]=A[i]-B[i];
	        sum+=C[i];
	        if(C[i]>0)
	        {
	            max+=C[i];
	        }
	    }
	    if(sum==0)
	    {
	        cout<<max<<endl;
	    }
	    else{
          cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}
