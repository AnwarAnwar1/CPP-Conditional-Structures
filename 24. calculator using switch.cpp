/* Q#24: Program that inputs a floating number and then a operator like +,-,* or / and then the second number and operate them according to entered operator.
if / i is by zero then show error messege and also on wrong operator entered by the user. */

#include<iostream>
using namespace std;
int main (){
	float n1, n2, result;
	char ch;
	cout<<"Enter the fist number=";
	cin>>n1;
	cout<<"Enter the operator like (+,-,*,/)=";
	cin>>ch;
	cout<<"Enter the second number=";
	cin>>n2;
	switch (ch)
	{
	case '+':
	 {
	  result=n1+n2;
	  cout<<"The sum is="<<result;
	 }
	 break;
	case '-':
	 {
	  result=n1-n2;
	  cout<<"The subtraction is="<<result;
	 }
	 break;
	case '*':
	 {
	  result=n1+n2;
	  cout<<"The multiplication is="<<result;
	 }
	 break;
	case '/':
	 {
	  if(n2==0)
	  cout<<"Division by 0 is not possible!";
	  else
	  {
	   result=n1/n2;
	   cout<<"The division is="<<result;
	  }
	 }
	 break;
	default:
		cout<<"You entered the wrong operator chose a right one.";
	}
}