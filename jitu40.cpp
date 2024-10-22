#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,user_sub,sec_out;
	cin>>t>>a>>b;
	user_sub=t-a;
	sec_out=(t-a)-b;
	cout<<user_sub<<" "<<sec_out;
	return 0;
}