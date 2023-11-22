/* Q#23: Program that inputs a character from the user and check whether it is vowel or consonent using switch. */

#include<iostream>
using namespace std;
int main (){
	char ch;
	cout<<"Enter a letter to check whether it is vowel or consonent=";
	cin>>ch;
	switch (ch)
	{
	case 'a':
   	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		cout<<"You entered a vowel letter "<<ch;
		break;
	default:
		cout<<"You entered the consonent";
	}
}