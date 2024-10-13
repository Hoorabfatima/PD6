#include<iostream>
using namespace std;
float DueAmount(char, char, int);
main()
{
  char code, time;
  int minutes;
  float amount;
  cout<<"Enter the service code (R/r for regular, P/p for premium): ";
  cin>>code;
  cout<<"Enter the time of call (D/d for day,N/n for night): ";
  cin>>time;
  cout<<"Enter the number of minutes used: ";
  cin>>minutes;
  if(code=='p'||code=='P')
   cout<<"Service type: Premium"<<endl;
  else if (code=='r'||code=='R')
   cout<<"Service type: Regular"<<endl;
  else
   cout<<"Invalid code"<<endl;
  cout<<"Total minutes used: "<<minutes<<" minutes"<<endl;
  amount= DueAmount(code, time, minutes);
  cout<<"Amount Due: $"<<amount;
}
float DueAmount(char code, char time, int minutes)
{
  float dues;
  if(code=='P'||code=='p')
   {
    if(time=='D'||time=='d')
     {
      if(minutes<=75)
       dues=25;
      else
       dues=25+(minutes*0.10);
     }
    else
     {
      if(minutes<=100)
       dues=25;
      else
       dues=25+(minutes*0.05);
     }
    }
  else
    {
     if(time=='D'||time=='d'||time=='N'||time=='n')
      {
       if(minutes<=50)
        dues=10;
       else
        dues=10+(minutes*0.20);
      }
     }
return dues;
}