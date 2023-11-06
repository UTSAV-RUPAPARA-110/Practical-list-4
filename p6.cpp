#include <iostream>
using namespace std;

class Product 
{
public:
  int m_Year;
  int e_Year;

  Product(int m_Year, int e_Year)
  	
    	: m_Year(m_Year), e_Year(e_Year)
		{
		 } 
	

n  int getDifference() 
  {
    return e_Year - m_Year;
  }
};

void printDifference(Product product) 
{
	  cout << "The difference between manufacture year and expiry year is: "
    	<< product.getDifference() << endl;
}

int main() 
{
  Product product(2022, 2026);
  printDifference(product);

  return 0;
}
