#include<iostream>
using namespace std;

class length
{
	int feet,inches;
	public:
	   void read()
	   {
	   	cout<<"enter the Feet and inches ";
	   	cin>>feet>>inches;
	   	
	   }
	   void display()
	   {
	   	cout<<"\n"<<feet<<" ' "<<inches<<" \" ";
	   	
	   }
	 length  operator+(length a)
	   {
	   	length t;
	   	t.inches= a.inches+inches;
	   	t.feet=a.feet+feet+t.inches/12;
	   	t.inches=inches%12;
	   	
	   	return t;
	   }
	
};
int main()
{
	length L1,L2,L3;
	L1.read();
	L2.read();
	
	L3=L1+L2;//l3=L1.operator+(L2);
	
	L1.display();
	L2.display();
	cout<<"\n addition is";
	L3.display();	
	
}
