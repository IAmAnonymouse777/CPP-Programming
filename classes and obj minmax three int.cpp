#include<iostream>
using namespace std;
void read();
void max();
void min();

       class MinMax 
       {
       	 private:
       	 	
       	 	int x,y,z;
       	
       	public:
       		void read()
       		{
       			cout<<"\n enter any int num ";
       			cin>>x>>y>>z;
       			
       			
			   }
			   void max()
			   {
			   	
			   	if (x>y)
				   {
				   
				   cout<<"\n maximum is = "<<x;
				   			   		
				   }
				   else
				   {  
				   
				   cout<<"\n maximum is = "<<y;
				   
				   }
				     if (y>z)
				   {
				   
				   cout<<"\n maximum is = "<<y;
				   			   		
				   }
				   else
				   {  
				   
				   cout<<"\n maximum is = "<<z;
				   
				   }
				   
				   
			
			   }
       	void min()
       	{
       			if (x<y)
				   {
				   
				   cout<<"\n minimum is = "<<x;
				   			   		
				   }
				   else
				   {  
				   
				   cout<<"\n minimum is = "<<y;
				   
				   }
				     if (y<z)
				   {
				   
				   cout<<"\n minimum is = "<<y;
				   			   		
				   }
				   else
				   {  
				   
				   cout<<"\n minimum is = "<<z;
				   
				   }
       		
       		
       		
		   }
       	
       	
       	
	   };
	   int main()
 {
	   
	   MinMax obj;
	   obj.read();
	   obj.max();
	   obj.min();
	   
}
