//Q#29: Write a program that display "C++" five times using goto statement.

#include<iostream>
using namespace std;
int main (){
	int n=0;
	loop:
		cout<<"C++\n";
		n++;
	if(n<5) goto loop;
}