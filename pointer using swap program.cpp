
#include<iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int a=10;
	int b=20;
	cout<<"\nbefore calling swap function ";
	cout<<"\n a is ="<<a;
	cout<<"\n b is ="<<b;
	swap(&a,&b);


}
void swap(int *a ,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"\nafter calling swap function ";
	cout<<"\n a is ="<<*a;
	cout<<"\n b is ="<<*b;

}
