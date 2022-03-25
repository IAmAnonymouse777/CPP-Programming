//in thise program we will see about global scope resolution operator "::"
//it is use to extend scope of global variable over local variable of same name. (see example below)
//it is use to defined member functions of class outside the class.
// it is use to call static member function through class name.
// it is denoted by "::" thise symbol.


#include<iostream>
using namespace std;
int a=50;
int main()
{
	int a=10;
     
    cout<<"\n"" the local variable is "<< a;
    cout<<"\n"" the global variable is " << ::a;//using global scope resolution operator.
    
        ::a++;

    
    cout<<"\n "" increment in global variable is " <<::a;
     
     a++;
     
    cout <<"\n"" increament in local variable is " <<a;
    
    
	
	
	
	
return(0);
}
