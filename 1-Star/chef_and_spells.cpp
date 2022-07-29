#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,x;
	    cin>>a >>b >>c;
	    x = min(a, min(b,c));
	    cout<< a+b+c-x <<endl;
	}
	return 0;
}
