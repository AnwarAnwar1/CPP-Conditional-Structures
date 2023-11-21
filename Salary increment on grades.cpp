/* Q#10: Program that inputs salary and grades. it adds 50% bonus if the grade are greater than 15. It adds 25% if grades are less than or equal to 15 and display the total salary. */

#include <iostream>
using namespace std;
int main() {
int s, g;
float per, salary;
cout<<"Enter your salary:";
cin>>s;
cout<<"Enter your grade:";
cin>>g;
if(g>15)
	{
	per=0.5*s;
	salary=per+s;
	cout<<"Your total salary with 50% bonus is:"<<salary;
	}
else if(g<=15)
	{
	per=0.25*s;
	salary=per+s;
	cout<<"Your total salary with 25% bonus is:"<<salary;
	}
}