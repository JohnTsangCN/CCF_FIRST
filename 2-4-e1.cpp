/*This program can be  used to transform  temperature from Fahrenheit to Celsius.
   Author: John Tsang
   Date: 2020-5-3
*/
#include<iostream>
using namespace std;

int main()
{
	float f, c;
	cout << "Enter a Fahrenheit degree:"; 
	cin >> f ;
	c = (f-32)*5/9;
	cout << f <<  " Fahrenheit degree"<<" equals to " << c <<  " Celsius degree " << endl;
	return 0;
}