//Q#16: Program that inputs three numbers and display the smallest number by using nested if-else.

#include<iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	cout<<"Enter three numbers to get the smallest number.\nEnter your first number:";
	cin>>num1;
	cout<<"Enter your second number:";
	cin>>num2;
	cout<<"Enter your third number";
	cin>>num3;
	if(num1<num2)
	{
	 if(num1<num3)
	 cout<<"The smallest number is:"<<num1;
	 else
	 cout<<"The smallesr number is:"<<num3;
	}
	else if(num2<num3)
	 cout<<"The smallest number is:"<<num2;
	 else
	 cout<<"The smallest number is:"<<num3;
	
}