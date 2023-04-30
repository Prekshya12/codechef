#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	long long int n;
	cin>>n;
	if(n<=3){
	    cout<<"-1"<<endl;
	}
	else if(n==4){
	    cout<<"2 4 1 3"<<endl;
	}
	else{
	    for(int i=1;i<=n;i+=2){
	        cout<<i<<" ";
	    }
	    for(int i=2;i<=n;i+=2){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	}
	return 0;
}
