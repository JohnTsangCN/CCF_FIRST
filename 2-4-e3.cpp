/*check number:467-->467467,467467 / 7 / 11 / 3 == 467.
   author: John Tsang
   date:2020-5-4
*/
#include<iostream>
using namespace std;

int main()
{
	int y, x, a, b, c;
	cout << "Enter a number:";
	cin >> x;
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x % 10;
	y = (a * 100 * 1000 + b * 10 * 1000 + c * 1000 + x);
	y = y  / 7 / 11 / 13;
	cout << "y = "<<y;
	return 0;
}