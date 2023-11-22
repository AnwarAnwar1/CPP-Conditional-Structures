/* Q#20: Program that allows the user to enter any key from the keyboard and determine whether it is capital letter, small letter, digital number or a symbol. */

#include<iostream>
using namespace std;
int main (){
	char ch;
	cout<<"Enter anything through keyboard to check wether it is capital letter, small letter, digital number or any symbol.";
	cout<<"\nEnter your key:";
	cin>>ch;
	 if(ch>='a' && ch<='z')
	 cout<<"You entered "<<ch<<" small letter.";
	 else if(ch>='A' && ch<='Z')
	 cout<<"You entered "<<ch<<" capital letter.";
	 else if(ch>='0' && ch<='9')
	 cout<<"You entered "<<ch<<" digital number.";
	 else
	 cout<<"You entered "<<ch<<" symbol.";
}