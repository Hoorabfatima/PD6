#include<iostream>
using namespace std;
string decideActivity(string, string);
main()
{
  string temperature, humidity, recommendedActivity;
  cout<<"Enter temperature (warm or cold): ";
  cin>>temperature;
  cout<<"Enter humidity (dry or humid): ";
  cin>>humidity;
  recommendedActivity=decideActivity(temperature, humidity);
  cout<<"Recommended Activity: " <<recommendedActivity;

}
string decideActivity(string temperature, string humidity)
{
 string activity;
 if(temperature=="warm")
  {
    if(humidity=="dry")
     activity="Play Tennis";
    else
     activity="swim";
  }
  if(temperature=="cold")
  {
    if(humidity=="dry")
     activity="Play Basket Ball";
    else
     activity="Watch TV";
  }
return activity;
}
    