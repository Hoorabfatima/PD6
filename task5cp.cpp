#include<iostream>
using namespace std;
float calculateFruitPrice(string, string, double);
main()
{
  string fruit, day;
  double quantity;
  float totalPrice;
  cout<<"Enter the fruit name: ";
  cin>>fruit;
  cout<<"Enter the day of week (e.g.,Monday, Sunday): ";
  cin>>day;
  cout<<"Enter the quantity: ";
  cin>>quantity;
  totalPrice=calculateFruitPrice(fruit, day, quantity);
  cout<<totalPrice;
  if(totalPrice==0)
  cout<<"invalid input";
}
float calculateFruitPrice(string fruit, string day, double quantity)
{
 float price;
 if(day=="Monday"||day=="monday"||day=="Tuesday"||day=="tuesday"||day=="Wednesday"||day=="wednesday"||day=="Thursday"||day=="thursday"||day=="Friday"||day=="friday")
  {
   if(fruit=="banana")
    price=2.50*quantity;
   else if(fruit=="apple")
    price=1.20*quantity;
   else if(fruit=="orange")
    price=0.85*quantity;
   else if(fruit=="grapefruit")
    price=1.45*quantity;
   else if(fruit=="kiwi")
    price=2.70*quantity;  
   else if(fruit=="pineapple")
    price=5.50*quantity;
   else if(fruit=="grapes")
    price=3.85*quantity;
   else
    return 0;
  }
  else if(day=="Saturday"||day=="saturday"||day=="Sunday"||day=="sunday")
   {
    if(fruit=="banana")
    price=2.70*quantity;
   else if(fruit=="apple")
    price=1.25*quantity;
   else if(fruit=="orange")
    price=0.90*quantity;
   else if(fruit=="grapefruit")
    price=1.60*quantity;
   else if(fruit=="kiwi")
    price=3.00*quantity;  
   else if(fruit=="pineapple")
    price=5.60*quantity;
   else if(fruit=="grapes")
    price=4.20*quantity;
   else 
    return 0;
     }
 else
  return 0;
return price;
}
 