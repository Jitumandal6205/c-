#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--){
	    int quan;
	    float p;
	    cin>>quan>>p;
	    if(quan>1000) 
        cout<<quan*p*0.9<<endl;
	    else cout<<quan*p<<endl;
	}
	return 0;
}
