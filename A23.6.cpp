//C++ program to calculate an average of 3 numbers.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int a,b,c,avg=0;
   cout<<"Enter three numbers :";
   cin>>a>>b>>c;
   avg=(a+b+c)/3;
   cout<<"Average is "<<avg;
   cout<<endl;
   return 0;
}
