//Q#19: Program that inputs a character and display whether it is vowel or conconent.

#include<iostream>
using namespace std;
int main (){
	char letter;
	cout<<"Enter a charater to check whether it is vowel or consonent.\nEnter the character:";
	cin>>letter;
	 if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' ||letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U' )
	 cout<<"You entered a vowel "<<letter;
	 else
	 cout<<"You entered a consonent "<<letter;
	 
}