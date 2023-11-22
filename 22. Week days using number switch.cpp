/* Q#22: Program that inputs a number of day and display the name of day using switch. (if i entered 1 it display Monday). */

#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"Enter the number of day to get its name=";
	cin>>n;
	switch (n)
	{
	 case 1:
	 	cout<<"Monday";
	 	break;
	case 2:
	 	cout<<"Tuesday";
	 	break;
	case 3:
	 	cout<<"Wednesday";
	 	break;
	case 4:
	 	cout<<"Thursday";
	 	break;
	case 5:
	 	cout<<"Friday";
	 	break;
	case 6:
	 	cout<<"Saturday";
	 	break;
	case 7:
	 	cout<<"Sunday";
	 	break;
	default:
		cout<<"You entered the wrong number!\nRange is from 1 to 7.";
	}
}