/*
MINIMUM 
By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
*/
#include<iostream>
using namespace std;
int min(int a,int b)//Write a program with a function that takes two int parameters,
{
	if(a<=b)//finds the minimum
	{
		return (a);//then returns a as the minimum.
	}
	else
	{
		return(b);//or else returns b the minimum.
	}
}
int main()
{
	int x,y;
	cout<<"Give me two numbers"<<endl;//The program should ask the user for two numbers,
	cin>>x>>y;
	cout<<"The minimum number is "<<min(x,y)<<endl;//then call the function with the numbers as arguments, and tell the user the minimum ofthetwo.
	return 0;
}
