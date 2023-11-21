/* Q#15: Program that inputs salary. 
	1. if salary is >=20000. It deducts 7% of the salary. 
	2. if salary is <20000 and >=10000. It deducts 1000 of the salary. 
	3. if salary is <10000. It deducts nothing of the salary.
and finally display the net salary. */

#include<iostream>
using namespace std;
int main (){
	float percent;
	int salary;
	cout<<"Enter your total salary to get net salary=";
	cin>>salary;
	if(salary>=20000)
	{
	 salary=salary-(salary*0.07);
	 cout<<"Your net salary is="<<salary;
	}
	else if(salary>=10000 && salary<20000)
	{
	 salary=salary-1000;
	 cout<<"Your net salary is="<<salary;
	}
	else if(salary<10000)
	cout<<"Your net salary is="<<salary;
}