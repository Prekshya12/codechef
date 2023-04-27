#include <bits/stdc++.h>
using namespace std;

int isVowel(char ch)
{
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	   int count =0;
	    for(int i=0;i<s.length()-2;i++)
	    {
	        if(isVowel(s[i])&&isVowel(s[i+1])&&isVowel(s[i+2]))
	        {
	            count=1;
	            break;
	        }
	        
	        
	    }
	    if(count){
	        cout<<"Happy"<<endl;
	    }
	    else{
	        cout<<"Sad"<<endl;
	    }
	}
	
	return 0;
}
