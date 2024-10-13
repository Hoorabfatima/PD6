#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
  int day;
  string month;
  string ZodiacSign;
  cout<<"Enter the day of your birth: ";
  cin>>day;
  cout<<"Enter the month of birth (e.g., January, February): ";
  cin>>month;
  ZodiacSign=findZodiacSign(day, month);
  cout<<"Zodiac Sign: "<<ZodiacSign;
}
string findZodiacSign(int day, string month)
{
  string sign;
  if((month=="March" || month=="march") && (day>=21 && day<=31) || (month=="april"||month=="April") && (day>=1 && day<=19))
   sign="Aries";
  if((month=="April" || month=="april") && (day>=20 && day<=30) || (month=="May"||month=="may") && (day>=1 && day<=20))
   sign="Taurus";
  if((month=="May" || month=="may") && (day>=21 && day<=31)  || (month=="June"||month=="june") && (day>=1 && day<=20))
   sign="Gemini";
  if((month=="June" || month=="june") && (day>=21 && day<=30) || (month=="July"||month=="july") && (day>=1 && day<=22))
   sign="Cancer";
  if((month=="July"|| month=="july") && (day>=23 && day<=31) || (month=="August"||month=="august") && (day>=1 && day<=22))
   sign="Leo";
  if((month=="August"|| month=="august") && (day>=23 && day<=31) || (month=="September"||month=="september") && (day>=1 && day<=22))
   sign="Virgo";
  if((month=="September"|| month=="september") && (day>=23 && day<=30) || (month=="October"||month=="october") && (day>=1 && day<=22))
   sign="Libra";
  if((month=="October"|| month=="october") && (day>=23 && day<=31) || (month=="November"||month=="november") && (day>=1 && day<=21))
   sign="Scorpio";
  if((month=="November"|| month=="november") && (day>=22 && day<=30) ||(month=="December"||month=="december") && (day>=1 && day<=21))
   sign="Saggitarius";
  if((month=="December"|| month=="december") && (day>=22 && day<=31) || (month=="January"||month=="january") && (day>=1 && day<=19))
   sign="Capricon";
  if((month=="January"|| month=="january") && (day>=20 && day<=31) || (month=="February"||month=="february") && (day>=1 && day<=19))
   sign="Aquarius";
  if((month=="February"|| month=="february") && (day>=19 && day<=29) || (month=="March"||month=="march") && (day>=1 && day<=20))
   sign="Pisces";
return sign;
}