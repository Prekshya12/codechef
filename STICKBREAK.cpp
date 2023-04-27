#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int k,l;
	    cin>>k>>l;
	    if(k%l==0){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
