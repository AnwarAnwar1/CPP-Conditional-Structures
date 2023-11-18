//Q#3: Program that inputs two numbers and show wether the second numbers is square of first.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
int num1, num2;
cout<<"Enter your first numbers:";
cin>>num1;
cout<<"\nEnter your second numbers:";
cin>>num2;
if(num1==sqrt(num2))
cout<<num2<<" is the square of "<<num1;
}