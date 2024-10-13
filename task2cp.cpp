#include<iostream>
using namespace std;
float calculateAverage(float, float, float, float, float);
string calculateGrade(float);
main()
{
  float marksEnglish, marksMath, marksChemistry, marksSocialScience, marksBiology;
  string name;
  float average;
  string grade;
  cout<<"Enter student name: ";
  cin>>name;
  cout<<"Enter marks for English: ";
  cin>>marksEnglish;
  cout<<"Enter marks for Math: ";
  cin>>marksMath;
  cout<<"Enter marks for Chemistry: ";
  cin>>marksChemistry;
  cout<<"Enter marks for Social Science: ";
  cin>>marksSocialScience;
  cout<<"Enter marks for Biology: ";
  cin>>marksBiology;
  average=calculateAverage(marksEnglish, marksMath, marksChemistry, marksSocialScience, marksBiology);
  grade=calculateGrade(average);
  cout<<"Student name: "<<name<<endl;
  cout<<"Percentage: "<<average<<" %"<<endl;
  cout<<"Grade: "<<grade;
}

float calculateAverage(float marksEnglish, float marksMath, float marksChemistry, float marksSocialScience, float marksBiology)
{
 float avg;
 avg=(marksEnglish + marksMath + marksChemistry + marksSocialScience + marksBiology)/6;
 return avg;
}
string calculateGrade(float average)
{
  string Grade;
  if(average>=90 && average<=100)
    Grade="A+";
  else if(average>=80 && average<90)
    Grade="A";
  else if(average>=70 && average<80)
    Grade="B+";
  else if(average>=60 && average<70)
    Grade="B";
  else if(average>=50 && average<60)
    Grade="C";
  else if(average>=40 && average<50)
    Grade="D";
  else if(average<40)
    Grade="F";
  else
    Grade="Invalid";
return Grade;
}
 