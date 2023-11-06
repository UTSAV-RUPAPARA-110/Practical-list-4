#include <iostream>
using namespace std;
class demodc 
{
   private:
   		int num1, num2 ;
   	public:
   		demodc() 
		{
     		num1 = 10;
      		num2 = 20;
   		}
   void display()
    {
      cout<<"num1 = "<< num1 <<endl;
      cout<<"num2 = "<< num2 <<endl;
   	}
};
int main() 
{
   demodc obj;
   obj.display();
   return 0;
}
