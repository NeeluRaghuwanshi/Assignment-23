//C++ program to swap values of two int variables without using third variable
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"Enter two numbers :";
   cin>>a>>b;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"Numbers after swapping are "<<a<<" and " <<b;
   cout<<endl;
   return 0;
}
