//C++ program to calculate the volume of a cuboid.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
  {
    float l,b,h,v;
    cout<<"Enter the lenght of cuboid\n";
    cin>>l;
    cout<<"Enter the breadth of cuboid\n";
    cin>>b;
    cout<<"Enter the height of cuboid\n";
    cin>>h;
    v= l*b*h;
    cout<<"Volume of cuboid is "<<v;
    return 0;

  }
