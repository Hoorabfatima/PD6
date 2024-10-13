#include<iostream>
#include<string>
using namespace std;
string checkStudentStatus(int, int, int, int);
main()
{
  int examHour, examMinute, studentHour, studentMinute;
  string result;
  cout<<"Enter exam starting time (hour 24-hour format): ";
  cin>>examHour;
  cout<<"Enter exam starting time (minutes 0-59): ";
  cin>>examMinute;
  cout<<"Enter student hour of arrival: ";
  cin>>studentHour;
  cout<<"Enter student minutes of arrival: ";
  cin>>studentMinute;
  result=checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
  cout<<result;
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
  string res;
  int mintDifference, hourDifference;
  if(examHour==studentHour && examMinute==studentMinute)
  res="On Time";
  else if(examHour==studentHour && examMinute!=studentMinute)
  {
   if(examMinute>studentMinute)
     {
      mintDifference=examMinute-studentMinute;
      res="On time +\n"+to_string(mintDifference)+" minutes before the start";
      }
   else
     {
      mintDifference=studentMinute-examMinute;
      res="Late \n"+ to_string(mintDifference)+=" minutes after start";
     }
   }
  else if(examHour!=studentHour && examMinute==studentMinute)
    {
     if(examHour>studentHour)
      {
       hourDifference=examHour-studentHour;
       res="Early \n"+to_string(hourDifference)+"1:0 hours before the start";
      }
      else
      {
        hourDifference=studentHour-examHour;
       res="Late \n"+to_string(hourDifference)+"1:0 hours after the start";
      }
    }
  else if(examHour!=studentHour && examMinute!=studentMinute)
   {
    if(examHour>studentHour && examMinute>studentMinute)
     {
       hourDifference=examHour-studentHour;
       mintDifference=examMinute-studentMinute;
       res="Early \n"+to_string(hourDifference)+":"+to_string(mintDifference)+" hours before the start ";
     }
    else if(examHour>studentHour && examMinute<studentMinute)
     {
      hourDifference=examHour-studentHour;
      mintDifference=studentMinute-examMinute;
      res="Early \n"+to_string(hourDifference)+":"+to_string(mintDifference)+" hours before the start ";
     }
    else if(examHour<studentHour && examMinute<studentMinute)
     {
      hourDifference=studentHour-examHour;
      mintDifference=studentMinute-examMinute;
      res="Late \n"+to_string(hourDifference)+":"+to_string(mintDifference)+" hours after the start ";
     }
    else if(examHour<studentHour && examMinute>studentMinute)
     {
      hourDifference=studentHour-examHour;
      mintDifference=examMinute-studentMinute;
      res="Late""\n"+ to_string(hourDifference) +":"+ to_string(mintDifference)+" hours after the start ";
     }
    else
     res="Invalid Input";
  }
return res;
}
 
