/* Q#12: Program that inputs marks of the student and display his grade. (>=90:A, 89-80:B, 79-70:C, 69-60,D, <60:F)! */

#include<iostream>
using namespace std;
int main (){
	int marks;
	cout<<"Enter your marks to get your grade:";
	cin>>marks;
	if(marks>=90 && marks<=100)
	cout<<"A\nGeat job!";
	else if (marks>=80 && marks<90)
	cout<<"B\nNeed more hard work";
	else if(marks>=70 && marks<80)
	cout<<"C\nGood luck";
	else if(marks>=60 && marks<70)
	cout<<"D";
	else if(marks>=0 && marks<=100)
	cout<<"F\nOpps you are fail!";
	else
	cout<<"You enter the wrong number.\nRage of marks is 0 to 100.";
}