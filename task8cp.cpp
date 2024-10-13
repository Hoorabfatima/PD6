#include<iostream>
#include<cmath>
using namespace std;
int calculateVolleyballGames(string, int, int);
main()
{
  string yearType;
  int holidays, hometownWeekends;
  int result;
  cout<<"Enter year type (normal/leap) : ";
  cin>>yearType;
  cout<<"Enter number of holidays: ";
  cin>>holidays;
  cout<<"Enter number of weekends: ";
  cin>>hometownWeekends;
  result=calculateVolleyballGames(yearType, holidays, hometownWeekends);
  cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
  int weekends, playHoliday, playHome;
  int res;
  if(yearType=="normal"||yearType=="Normal")
   {
     weekends=48-hometownWeekends;
     weekends=(0.75)*weekends;
     playHoliday=(2.0/3.0)*holidays;
     res=weekends + playHoliday + hometownWeekends;
    }
  else if(yearType=="leap"||yearType=="Leap")
   {
    weekends=48-hometownWeekends;
     weekends=(3.0/4.0)*weekends;
     playHoliday=(2.0/3.0)*holidays;
     res=(weekends + playHoliday + hometownWeekends);
     res=res+(res*15.0/100.0);
    }
   else 
    return 0;
return res;
}
 
  