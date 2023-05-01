#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,flag=0;
	    cin>>n>>k;
	    
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    long long int prod=1;
	    for(int i=0;i<n;i++)
	    {
	        prod=(prod*arr[i]%k);
	         if(prod==0)
	        {
	            flag++;
	            break;
	        }
	    }
	    if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
	}
	return 0;
}
