//Q#18: Program that inputs three numbers and display the maximum number using logical operators.

#include<iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	cout<<"Enter three numbers to get the maximum number.\nEnter your first number:";
	cin>>num1;
	cout<<"Enter your second number:";
	cin>>num2;
	cout<<"Enter your third number:";
	cin>>num3;
	 if(num1>num3 && num1>num2)
	 cout<<"The maximum number is:"<<num1;
	 else if(num2>num1 && num2>num3)
	 cout<<"The maximum number is:"<<num2;
	 else
	 cout<<"The maximum number is:"<<num3;	
}