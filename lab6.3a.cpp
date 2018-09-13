/*
3a.
Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
*/
#include<iostream>
using namespace std;
int max(int a,int b)//Write a program with a function that takes two int parameters,
{
	if(a>=b)//find the maximum,
	{
		return (a);//then return the maximum
	}
	else
	{
		return(b);//then return the maximum
	}
}
int main()
{
	int x,y;
	cout <<"Give me two numbers"<<endl;//The program should ask the user for two numbers,
	cin >>x>>y;
	cout<<"The maximum number is "<<max(x,y)<<endl;//then call the function with the numbers as arguments, and tell the user the maximum.
	return 0;
}
