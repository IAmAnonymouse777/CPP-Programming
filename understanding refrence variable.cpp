//in thise program we will see about reference variable 
//reference variable is an alternative name of predefined variable

//syntax : data_type &new_name = old_name;
//we can declared multiple refrence to same variable;
//any variable all its refrences refer to same memory. they are just alternative name of each of others
//example= int x=30, int &a=x;


#include<iostream>
using namespace std;
int main ()

{
	int x;
	int &a=x; //declered the refrence variable 
	  cout<<"enter any int number ";
	  cin>>x;
	cout<<"\n"<<"the x = "<<x<< " reference variable is "<<a;//there are printing refrence variable
	
	
	return (0);
	
	
}
