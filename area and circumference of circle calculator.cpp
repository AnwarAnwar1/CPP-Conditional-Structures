/* Q#14: Pogram that inputs radius and user choice. It calculate area of circule if user enter 1 and if user enter 2 it calculate circumference of cicule */

#include<iostream>
#include<cmath>
using namespace std;
int main (){
	float radius,area, cir;
	int choice;
	cout <<"Enter the radius of the circle:";
	cin>>radius;
	cout<<"Enter 1 if you want to calculate area of circle and 2 for circumference:";
	cin>>choice;
	if(choice==1)
	{
	 area=3.14*radius*radius;
	 cout<<"The Area of circle is="<<area;	
	}
	else if(choice==2)
	{
	 cir=2.0*3.14*radius;
	 cout<<"The Circumference of the circle is="<<cir;
	}
	else
	cout<<"You enter the wrong number! Enter 1 or 2 in choice.";
}