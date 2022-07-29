#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b;
	    cin>>a>>b;
	    string result = (a==b)?"=":(a>b)?">":"<";
	    cout<<result<<endl;
	}
	return 0;
}
