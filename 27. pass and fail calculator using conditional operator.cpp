/* Q#27: Write a program that inputs the marks of the student and display "Pass" if marks are more then 40 and "Fail" otherwise, using conditional operator. */

#include<iostream>
using namespace std;
int main (){
	int marks;
	cout<<"Enter your marks to check either you are pass or fail.";
	cout<<"\nEnter marks:";
	cin>>marks;
	cout<<(marks>=40? "Pass":"Fail");
}