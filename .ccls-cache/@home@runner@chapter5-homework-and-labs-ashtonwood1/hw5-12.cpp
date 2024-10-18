//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double price1;
  double price2;
  double discount; 
  double total_cost;

  
  cout << "Price of the first item: ";
  cin >> price1;
  cout << "Price of the second item: ";
  cin >> price2;

  if (price1 < price2) {
    discount = price1 * 0.5; 
  } else if (price2 < price1) {
    discount = price2 * 0.5; 
  } else { 
    discount = price2 * 0.5;
  }

  total_cost = price1 + price2 - discount;
  cout << fixed << setprecision(2); 
  cout << "Total cost: " << total_cost << endl;

  return 0;

  
}	//end of main function