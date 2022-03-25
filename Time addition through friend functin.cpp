/*##########  Passing object as parameter  ###############

1. Object is nothing but a variable of class type. 2. We can pass object as parameter to any function inside or outside class (Just like parameters of fundamental types).

3. Provided Class type of actual parameter & formal parameter must be same.

4. We can also return object from function provided return type of function must be same as

class type of object.

###########  Friend Function  ###########################################

1. Private data members of class are accessible

only to the member functions of class.

2. That means, member function of one class can not directly access data member of

another class. 
3. However, we often need to share data among multiple objects of different classes.
4. In such case we need a function in common which can access private members of multiple different classes. 
5. Concept of friend function is introduced for this purpose.

1. Friend function is any normal function outside the class which is declared as friendly to the class by using keyword 'friend'.

2. Syntax

class class_name

{
.      ...... 
..........
....
friend return_type function_name(parameter list);
};

3. A friend function can access private members of class even if it is not member function of class.








########################   Properties:    #######################################
1. A friend function can access private members of class even if it is not member function of class.

2. Object is not required to call friend function (It is called like normal function)

3. Friend function usually takes objects as parameters.

4. A function can be declared as friend function of

one or more classes.





 ###################################   Member function as Friend  ###################################

1. We can declare member function of one class as friend function of another class. 2. Scope resolution operator is used in declaration as show

below.

3. Syntax 
class ABC {

...............
................
'...............

friend void XYZ::dummy(parameter list);
};

4. Member function dummy of class XYZ is friend of class ABC




###############################  Friend class #####################################

1. We can declare one class as friend of another class.

2. All member functions of friend class can access private members of class in which it is declared as friend. (Reverse is not valid unless declared)

3. Syntax 
class ABC

{
........
..........
........
friend class XYZ;
};

4. Member function class XYZ can access private members of class ABC..





*/ 



#include<iostream>
using namespace std;
class Time
{
	int hr, min;
	
	public: 
	Time()
	{
	
	}
	
	Time(int a, int b)
	{
	hr=a;
	min=b;
    }
    
    
//	read()
//	{
//		cout<<"\n enter the hrs and min to add";
//		cin>>hr>>min;
		
//	}
	void display()
	{
		cout<<"\n"<<hr<<":"<<min;
		
	}
	friend Time add(Time,Time);
};
int main()
{
    Time  a(2,54),b(3,24),c;
  //  a.read();
    //b.read();
   c=add(a,b);
    a.display();
    b.display();
        cout<<"\naddition is \n ";
        c.display();
	
	
}
Time add(Time a, Time b)
{ Time t;
  t.min=a.min+b.min;
  t.hr=a.hr+b.hr+t.min/60;
  t.min=t.min%60;
  return t;
		
}
