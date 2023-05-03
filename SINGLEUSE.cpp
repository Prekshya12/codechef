#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int h,x,y;
	    cin>>h>>x>>y;
	    int count =1;
	    h=h-y;
	    if(h%x==0)
	    {
	        count+=h/x;
	    }
	    else
	    {
	        count+=(h/x)+1;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
