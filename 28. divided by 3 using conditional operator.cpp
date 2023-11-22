/* Q#28: Write a program that inputs a interger and check whether it is divided by 3 or not using conditional operator. */

#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"Enter a number to check whether it is divided by 3 or not!";
	cout<<"\nEnter number:";
	cin>>n;
	cout<<(n%3==0? "Can be divided by 3.":"Cannot be divided by 3.");
}