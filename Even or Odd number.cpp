//Q#8: Program that inputs a numbers and tell whether it is even or odd using if-else.

#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a number to check whether it is even or odd:";
cin>>n;
if(n%2==0)
	cout<<n<<" is a Even number.";
else
	cout<<n<<" is a Odd number.";
}