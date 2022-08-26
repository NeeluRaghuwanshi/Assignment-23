//C++ program to add all the numbers of an array of size 10.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int a[10],i,sum=0;
   cout<<"Enter 10 array elements ";
   for(i=0;i<10;i++)
   cin>>a[i];
   for(i=0;i<10;i++)
   sum=sum+a[i];
   cout<<"Sum of all elements is "<<sum;
   cout<<endl;
   return 0;

}
