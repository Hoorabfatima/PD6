#include<iostream>
using namespace std;
string checkPointPosition(int, int, int);
main()
{
  int h, x, y;
  string result;
  cout<<"Enter height: ";
  cin>>h;
  cout<<"Enter x coordinate: ";
  cin>>x;
  cout<<"Enter y coordinate: ";
  cin>>y;
  result=checkPointPosition(h, x, y);
  cout<<result;
}
string checkPointPosition(int h, int x, int y)
{
 string res;
 if((x>0 && x<(3*h) && y>0 && y<h) || (x>h && x<(2*h) && y<(4*h)))
  res="Inside";
 else if((x<=(3*h) && y==0) || (x<=(3*h) && y==h) || (x==h && y<=(4*h)) || (x==(2*h) && y<=(4*h)) || (x<=3*h && y<=h))
  res="Border";
 else
  res="Outside";
return res;
}

  
  