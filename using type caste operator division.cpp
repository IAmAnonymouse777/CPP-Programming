/*in thise program we will learn about type caste operator.
 type cate operator simply change your value into one type to another type
 
 syntax in c++ :  datatype(variable)
 
 syntax in c   : (datatype)variable
 lets go and impliment in our programm.
 */

#include<iostream>
using namespace std;
int main ()
{
	
	int x, y; /*variable diclariation*/
	
	float div;
	
	cout<<"enter any number";
	cin>>x;
	cout<<"enter another numeber";
	cin>>y;
	
	div=float(x)/y;
	
	cout<<"\n"<<" division is " <<div ;
	
	
	
	
	return(0);
}
