#include<iostream>
void max();
void min();
void display();
using namespace std;
class minmax
{
	private: 
	int x, y;
	
	public:
		void display()
		{
			cout<<"\n Enter any two int number";
			cin>>x>>y;
						
			
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
			
			
		}
		    void min()
		    {
		    	if (x<y)
		    	{
		    		 
		    		 cout<<"\n minimum is = "<<x;
		    		 
				}
				else 
				{
					cout<<"\n minimum is =" <<y;
				}
		    	
		    	
			}
	
};
int main() 
{
minmax obj;
	
obj.display();
obj.max();
obj.min();

return (0);
}

