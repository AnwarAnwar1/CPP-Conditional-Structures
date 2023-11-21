/* Q#11: program that inputs two intergers and determine if the first number is multipule of second interger. (Number a apear in its table is its multiple)! */

#include<iostream>
using namespace std;
int main (){
	int num1,num2;
	cout<<"Enter two different interger to check whether the first is multipule of second or not.\n";
	cout<<"Enter your first number:";
	cin>>num1;
	cout<<"Enter your second number:";
	cin>>num2;
	if(num1%num2==0)
	{
		cout<<"Yes! "<<num1<<" is the multiple of "<<num2<<".";
	}
	else
	{
		cout<<"No! "<<num1<<" is not the multiple of "<<num2<<".";
	}
}