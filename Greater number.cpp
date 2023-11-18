//Q#5: Program that inputs three numbers and display the maximum number on screen.

#include <iostream>
using namespace std;
int main() {
int num1, num2, num3, max;
cout<<"Enter first number:";
cin>>num1;
cout<<"\nEnter second number:";
cin>>num2;
cout<<"\nEnter third number:";
cin>>num3;
max=num1;
if (max<num2)
max=num2;
if (max<num3)
max=num3;
cout<<"\nThe maximum number is:"<<max;
}