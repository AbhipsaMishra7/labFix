//2b Sum by Reference
/*
Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

*/
#include<iostream>
using namespace std;
/*
the function that adds the numbers should be void, and takes a third, pass by reference parameter
*/
void fSum(int a,int b,int& c)
{
	c=a+b;//then puts the sum in that.
}
int main()
{
	int a,b,sum;
	cout<<"Give me two numbers"<<endl; //output
	cin>>a>>b;//input from terminal
	fSum(a,b,sum);
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
