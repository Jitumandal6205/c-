# include<iostream>
# include<math.h>
using namespace std;
    
int main() 			
 {
	
	float a,b,c,d,r1,r2;
	cout<<"enter a,b,c";
	cin>>a>>b>>c;
	d=b*b-4*a*c;

	if(d==0)
	{
		cout<<"roots are real and equal"<<endl;
		cout<<(-b/(2*a));
	 }
		else if(d>0)
		{

			cout<<"roots are real and unequal"<<endl;
			cout<<(-b+sqrtd/(2*a));
			cout<<(-b-sqrtd/(2*a));
		}
	 		else
			cout<<"imaginery";
			return 0;

}


