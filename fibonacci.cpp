//in this program we will learn how to print fibonecci number 
//fiboneci number meance simply
//0+1=1
//1+1=2
//2+1+3
//3+2=5
//5+3=8

#include<iostream>
using namespace std;
int main()
{
	int n=0, a=1,sum,c,i;
	
	cout<< "enter number you want to print for fibonecci seriese";;
	 cin>>c;
	
	
	
	for(i=0;i<=c;i++){
	
	
	sum=a+n;
	n=a;
	a=sum;
	cout<<sum <<"\t";
	
	
		
	}
	
	
	return 0;
}
