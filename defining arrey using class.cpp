#include<iostream>
using namespace std;
// defined the arrey in the class in these program.

class array
{
	private: int 
	 a[10];
	
	public:
		void putData();
		void getData();
		
	
};// we can now defined the class of fuction body out side the class with use of global scope resolution operater;
void array::getData()
{
	int i;
	cout<<"\nenter the num for inserting arrey elements";
	
	for (i=0;i<10;i++)
	cin>>a[i];
}
void array::putData()
{
   int i;
   cout<<"\n the array element are = ";
   for (i=0;i<10;i++)
   cout<<"\t"<<a[i];
   
	
	
}
int main()
{
     array obj;
  obj.getData();
  obj.putData();
  
	
	
	return(0);
}
