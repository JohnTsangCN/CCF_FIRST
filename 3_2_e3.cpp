#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a % 123 >= 97&& a % 123 <= 122) 
	{	
		char result = 'a' + (a % 123 - 97); 
		cout << result << endl;
	}
	else if (a % 91 >= 65&&a % 91 <=90)
	{
		char result = 'A'+ a % 91-65;
		cout <<  result;
	}	
	else
		cout << "*";
	return 0;
}