/* Q#4: Program that inputs marks of three subjects, if the averrage is above 80 then display two messages 1."You are above standered", 2."Admission granted". */

#include <iostream>
#include <cmath>
using namespace std;
int main() {
int num1, num2, num3;
float avg;
cout<<"Enter numbers of your first subject:";
cin>>num1;
cout<<"\nEnter numbers of your second subject:";
cin>>num2;
cout<<"\nEnter numbers of yours third subject:";
cin>>num3;
avg=(num1+num2+num3)/3;
if(avg>80)
cout<<"Yours marks average is "<<avg<<"\n1. You are above standered!\n2. Admission granted!";
}