#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,n;
	cin >> n >> a >> b >> c;
	if (pow(a,3)+pow(b,3)+pow(c,3) == n)
	    cout << "Yes.";
	else
		cout << "No.";
	return 0;
	}