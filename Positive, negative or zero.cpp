//Q#6: Program that input a number and check whether it is positive, negative or zero.

#include <iostream>
using namespace std;
int main() {
int num;
cout<<"Enter a number:";
cin>>num;
if (num>0)
cout<<"Number is positive";
if (num<0)
cout<<"Number is negative";
if (num==0)
cout<<"It is zero.";
}