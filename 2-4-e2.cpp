/*This program can be used to calculate the area of a triangle based on its three sides .
   Author: John Tsang
   Date: 2020-5-4
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float area, p, a, b, c;
	cout << "enter three sides of the triangle: ";
	cin >> a >> b >> c;
	
	// calculate semiperimeter
	p = (a+b+c)/2;
	
	// calculate the area of a triangle based on semiperimeter and three sides
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << area << endl;
	return 0;
}