/* Q#9: Program that inputs a year and check whether it is leap year or not. (366 days in leap year instead of 365). */

#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter a year to check whether it is leap or not:";
cin>>n;
if(n%4==0)
	cout<<n<<" is a leap year.";
else
	cout<<n<<" is not a leap year.";
}
