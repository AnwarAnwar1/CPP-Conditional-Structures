//Q#7: Program that inputs 5 integers and print the largest and smallest number on the screen.

#include <iostream>
using namespace std;
int main() {
int n1, n2, n3, n4, n5, min, max;
cout<<"Enter five intergers:";
cin>>n1>>n2>>n3>>n4>>n5;
min=max=n1;
if (max<n2)
max=n2;
if (max<n3)
max=n3;
if (max<n4)
max=n4;
if (max<n5)
max=n5;

if (min>n2)
min=n2;
if (min>n3)
min=n3;
if (min>n4)
min=n4;
if (min>n5)
min=n5;
cout<<"\nThe largest number = "<<max;
cout<<"\nThe smallest number = "<<min;
}