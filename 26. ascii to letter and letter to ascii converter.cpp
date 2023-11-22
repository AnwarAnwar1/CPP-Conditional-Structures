/* Q#26: Write a program that converts ASCII number to letter and vice versa. This should display for the choice of conversion. */

#include<iostream>
using namespace std;
int main (){
	int number,choice;
	char letter;
	cout<<"1. if you want to convert ASCII to crosponding letter.";
	cout<<"\n2. if you want to convert letter to crosponding ASCII.";
	cout<<"\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter ASCII number:";
			cin>>number;
			cout<<"The crosponding letter is= "<<char(number);
			break;
		case 2:
			cout<<"Enter letter:";
			cin>>letter;
			cout<<"The crosponding number is= "<<int(letter);
			break;
	}
}