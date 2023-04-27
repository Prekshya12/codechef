#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    while(k>0)
	    {
	        if(s[0]=='0')
	        {
	            s[0]='1';
	        }
	        else{
	            s+='0';
	        }
	    k--;
	        
	    }
	    cout<<s<<endl;
	    
	    
	}
	return 0;
}
