//Q2A Sum (by value)
/*Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/
#include<iostream>
using namespace std;
/*
Write a program with a function that takes two int parameters, adds them together, then returns the sum.
*/
int fnSum(int first,int second)
{
	int sum;
	sum=first+second;
	return (sum);
}
/*
The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/
int main()
{
	int first,second;
	cout<<"give two integers"<<endl;//ask for two numbers in terminal
	cin>>first>>second;
	/*
	then call the function with the numbers as arguments, and tell the user the sum.
	*/
	cout<<"The sum is "<<fnSum(first,second)<<endl;
	return 0;
}
