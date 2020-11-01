#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a > 90)
		cout << "you xiu";
	else if(90>a&&a>=80)
		cout << "liang hao";
	else if(60<=a&&a<80)
		cout << "ji ge";
	else 
	    cout << "bu ji ge";	
	return 0;
}