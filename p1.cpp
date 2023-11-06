#include<iostream>
using namespace std;
class employee
{
	private :
		int emp_id;
		char emp_name[10];
		
	public :
		void getdata()
		{
			cout<<"Enter employee name ::";
			cin>>emp_name;
			
			cout<<"enter employee id";
			cin>>emp_id;
		}
		void  putdata()
		{
			cout<<"employee name is :\n"<<emp_name;
			cout<<"employee id is :\n"<<emp_id;	
		}
};
int main()
{
	int i;
	employee a[3];
	for(i=1;i<=3;i++)
	{
		a[i].getdata();
	}
	for(i=1;i<=3;i++)
	{
		a[i].putdata();
	}
	return 0;
}
