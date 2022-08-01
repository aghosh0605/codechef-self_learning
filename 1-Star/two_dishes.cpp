#include <iostream>
using namespace std;
//MAX_DIFF Problem
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s,sum,start,end;
	    cin>>n>>s;
	    if(s<=n){
	        //Digits wil be 0 and s for max
	        cout<<s<<endl;
	    }else{
	        //Both digits will be n.s-n for max
	        cout<<2*n-s<<endl;
	    }
	}
	return 0;
}
