#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int age;
 double income;
 char city[10];
 long int vehicle;
 
 cout<<"\nEnter the age: ";
 cin>>age;
 cout<<"\nEnter the income: ";
 cin>>income;
 cout<<"\nEnter the city: ";
 cin>>city;
 cout<<"\nEnter the vehicle(2/4): ";
 cin>>vehicle;
 
 try
 {
  if(age<18 || age>55)
   throw age;
  else
    cout<<"\nAge is Perfect";
 }
 catch(int)
 {
  cout<<"\nException caught in age"; 
 }
  
 try
 {
  if(income<50000 || income>100000)
   throw income;
  else
    cout<<"\nIncome is Perfect";
 }
 catch(double)
 {
  cout<<"\nException caught in Income";
 }
  
 try
 {
  if(strcmp(city,"pune") && strcmp(city,"mumbai") && strcmp(city,"bangalore") && strcmp(city,"chennai"))
   throw city;
  else
    cout<<"\nCity is Perfect";
 }
 catch(char[])
 {
  cout<<"\nException caught in city";
 }
 try
 {
  if(vehicle!=4)
   throw vehicle;
  else
   cout<<"\nVehicle is Perfect";
 }
 catch(long int)
 {
  cout<<"\nException caught in vehicle";
 }
 cout<<"\n\n";
 return 0;
}
