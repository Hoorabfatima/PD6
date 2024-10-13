#include<iostream>
#include<string>
using namespace std;
string calculateHotelPrice(string, int);
main()
{
 string month, result;
 int num;
 cout<<"Enter the month (May, June, July, August, September, October): ";
 cin>>month;
 cout<<"Enter the number of stays: ";
 cin>>num;
 result=calculateHotelPrice(month, num);
 cout<<result;
}
string calculateHotelPrice(string month, int num)
{
 double studio, apartment;
 string res;
 if(month=="October"||month=="october"||month=="May"||month=="may")
  {
   studio=50*num;
   apartment=65*num;
  }
 else if(month=="June"||month=="june"||month=="September"||month=="september")
  {
  studio=75.20*num;
  apartment=68.70*num;
  }
 else if(month=="July"||month=="july"||month=="August"||month=="august")
  {
  studio=76*num;
  apartment=77*num;
  }
 else
  return 0;
 if((month=="May"||month=="may"||month=="October"||month=="october") && (num>7 && num<=14))
   {
   studio=studio-studio*5/100;
   apartment=apartment-apartment*10/100;
   }
  else if((month=="May"||month=="may"||month=="October"||month=="october") && num>14)
   {
    studio=studio-studio*30/100;
    apartment=apartment-apartment*10/100;
   }
 else if((month=="June"||month=="june"||month=="September"||month=="september") && num>14)
  {
   studio=studio-studio*20/100;
   apartment=apartment-apartment*10/100;
  }
 else if((month=="June"||month=="june"||month=="September"||month=="september") && num<=14)
  {
   studio=studio;
   apartment=apartment;
  }
 else if(month!="ad" && num>14)
  {
   apartment=apartment-apartment*10/100;
  }
 else
  return 0;
res="Apartment: "+ to_string(apartment)+"%" "\n studio: "+to_string(studio)+"%";
return res;
}
   
 