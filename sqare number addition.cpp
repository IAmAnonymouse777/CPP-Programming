#include<iostream>
using namespace std;
int main()
{
	int x=0,i,sum,n;
	
	cout<<"enter the number";
	cin>>n;
	
		cout<<"\n""square frome 0 to "<<n<<" is ";	
		
	for(i=0; i<=n; i++){
		sum=i*i;
		x+=sum;
		
	cout<<"\n"<<sum;
	}
	cout<<"\n"<<"sqare of the number is "<<sum;
	cout<<"\n"<<"sum of square of the natural num is "<<x;
	
	
	
	return 0;
	
}
