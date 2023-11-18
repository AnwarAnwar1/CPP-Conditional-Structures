//Q#1: Program that inputs marks and display "Congranculation!" on 40 or above 40 marks.

#include <iostream>
using namespace std;
int main() {
int marks;
cout<<"Enter your numbers:";
cin>>marks;
if(marks>=40)
cout<<"\nCongratulation you have passed with "<<marks<<" marks.";
}