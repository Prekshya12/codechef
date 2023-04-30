#include <bits/stdc++.h>
using namespace std;

void subarray(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int min_ele = LONG_MAX;
    long long int max_ele = LONG_MIN;
    max_ele = max(arr[0]*arr[0],arr[n-1]*arr[n-1]);
    if(arr[0]<0&&arr[n-1]>0){
        min_ele = arr[0]*arr[n-1];
    }
    else{
        for(int i=0;i<n;i++){
            min_ele = min(min_ele,arr[i]*arr[i]);
        }
    }
    cout<<min_ele<<" "<<max_ele<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    subarray();
	    
	}
	return 0;
}
