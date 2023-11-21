/* Q#13: Program that calculate the electricity bill. The rates of electricity are as follows:
	1. If units consumed are <=300, then per unit is Rs. 2.
	2. If units consumed are >300 and <=500, then per unit is Rs. 5.
	3. If units consumed exceed 500, then per unit is Rs. 7.
A line rent of Rs.150 is also added to each bill. if total bill exceeds Rs.2000 then add 5% surcharge of his previous bill. */

#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int units, perUnit,bill,totalBill;
	double surcharge,finalBill;
	cout<<"Enter the total units of your bill=";
	cin>>units;
	if(units<=300)
	{
		perUnit=2;
		bill=2*units;
	}
	else if (units>300 && units<=500)
	{
		perUnit=5;
		bill=5*units;
	}
	else if(units>500)
	{
		perUnit=7;
		bill=7*units;
	}
		totalBill=bill+150;	
	if(totalBill>2000)
	{
		surcharge=0.05*totalBill;
		finalBill=totalBill+surcharge;
		cout<<"Your bill according to units is "<<bill<<" and total bill with Rs.150 line rent and Rs. "
		<<surcharge<<" surcharge is=Rs. "<<finalBill;
	}
	
	else
	{
		cout<<"Your bill according to units is Rs. "<<bill<<" and total bill with Rs.150 line rent is=Rs. "<<totalBill;
	}
}