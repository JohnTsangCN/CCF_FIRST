#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin >> n >> x;
	if (n == 1)
		cout<<x / 0.5 * 3<< " minutes.";
	else 
		cout << x / 0.2 << " minutes.";
	return 0;
}