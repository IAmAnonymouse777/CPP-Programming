
//thise programm we will see about function overloading function overloading is basically is same name of function 

#include<iostream>
using namespace std;
int add(int,int);
float add( float, float);
int add(int, int, int);
int main()
{
	int a,b,c,d,e;
	float x,y;
cout<<" \n enter two num for addition";	
cin>>a>>b;
	cout<<"\nthe result is = "<<add( a,b);

cout<<" \n enter two float num for addition";
cin>>x>>y;
   cout<<" \n the result ="<<add(x,y);
cout<<"\n enter any three int int num for addition";
 cin>>c>>d>>e;
  cout<<"\n the reasult is = "<<add(c,d,e);
 
 
}
 int add(int f, int g)
{

 
 return (f+g);
}
 float add(float p,  float q)
{

 
return(p+q);
}
int add( int m,int n, int o)
{

 
 return (m+n+o);
}

