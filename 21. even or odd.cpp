//Q#21: Program that get a interger and show whether it is even or odd using not (!) operator.

#include<iostream>
using namespace std;
int main (){
	 int n;
	 cout<<"Enter a number to check Even or Odd=";
	 cin >>n;
	 if(!(n%2==0))
	 cout<<"Your number "<<n<<" is Odd.";
	 else
	 cout<<"Your number "<<n<<" is Even.";
}