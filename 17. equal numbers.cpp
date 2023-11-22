/* Q#17: Program that inputs three numbers and show whether they are equal to each other or not using nested if-else. */

#include<iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	cout<<"Enter three numbers to check whether they are equal to each other or not.\nEnter your first number:";
	cin>>num1;
	cout<<"Enter your second number:";
	cin>>num2;
	cout<<"Enter your third number:";
	cin>>num3;
	if(num1==num2)
	{
	 if(num1==num3)
	 cout<<"Yes! All numbers equal to each other.";
	 else
	 cout<<"No! All numbers not not equal to each other.";
	}
	else
	cout<<"No! All numbers are not equal to each other.";	
}