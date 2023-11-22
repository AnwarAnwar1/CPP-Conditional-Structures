/* Q#25: Program that display the following menu of a health club:
	1. Standard Adult Membership
	2. Child membership
	3. Senior citizen membership
	4. Quit the program
   if the user select from the first three memberships then he has pay 1=50, 2=20, 3=30 per month. */

#include<iostream>
using namespace std;
int main (){
	int n,result,months;
	cout<<"Following is the menu of Helth club membership:";
	cout<<"\n\t 1. Standard Adult Membership";
	cout<<"\n\t 2. Child Membership";
	cout<<"\n\t 3. Senior Citizen Membership";
	cout<<"\n\t 4. Quit the Program";
	cout<<"\nEnter your choice=";
	cin>>n;
	if(n==4)
	{
	cout<<"You can leave now!";
	exit(0);
	}
	cout<<"Enter the number of month for membership:";
	cin>>months;

	switch (n)
	{
	case 1:
	 result=50*months;
	 cout<<"Total charges are Rs. "<<result;
	 break;
	case 2:
	 result=20*months;
	 cout<<"Total charges are Rs. "<<result;
	 break;
	case 3:
	 result=30*months;
	 cout<<"Total charges are Rs. "<<result;
	 break;
	default:
	 cout<<"You entered the wrong choice!";
	}
}