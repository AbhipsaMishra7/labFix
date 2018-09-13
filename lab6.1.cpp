/*
the question 'cause i can't remember it
Tax Rate calculation using functions
1. Write a function that obtains from the user and returns a value for unitCst, units and taxRt to the calling madule.
Choose an apt name for this function.
2. write a function that recieves the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue.
 Choose an appropriate name for this function.
 3.Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format.
 Choose an appropriate name for this function.
 4.Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
*/
#include <iostream>
using namespace std;
//part one
void inptModule(float& unitCst, float& units , float&taxRt)
{
     cout << "enter input cost"<< endl;
     cin >> unitCst;
     cout << "enter number of units" <<endl;
     cin >> units;
     cout<<"nter the tax rate"<<endl;
     cin>>taxRt;
}    //nothing "returned" 'cause its a void function
 
//part two
void calcModule(float& unitCst,float& units,float& taxRt,float& salesTx,float& totDue)
{
	salesTx = unitCst*taxRt/100;
	totDue = unitCst*(1+taxRt/100)*units;
}

//part three
void outptModule(float& unitCst,float& units,float& taxRt,float& salesTx,float& totDue)
{
	cout<<"The unit cost is "<<unitCst<<endl;
	cout<<"The number of units is "<<units<<endl;
	cout<<"The rate of tax is "<<taxRt<<endl;
	cout<<"So the sales Tax is "<<salesTx<<endl;
	cout<<"Hence, the total due is "<<totDue<<endl;
}
//part four
int main() {
	float unitCost,unitsPurch,taxRate,salesTax,totalDue; //declaring float variables as demanded by the question
	
	inptModule(unitCost,unitsPurch,taxRate);
	
	calcModule(unitCost,unitsPurch,taxRate,salesTax,totalDue);

	outptModule(unitCost,unitsPurch,taxRate,salesTax,totalDue);

	return 0;
}

