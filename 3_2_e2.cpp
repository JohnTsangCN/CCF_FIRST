#include<iostream>
using namespace std;
int main()
{
	float wei;
	cin >> wei;
	if (wei > 30)
		cout << "Sorry,it can't send."<< endl;
	if (wei <= 10)
		cout << wei * 0.8+0.2 <<"yuan."<< endl;
	if (10 < wei && wei <= 20)
		cout << 0.75 * wei + 0.2 << "yuan."<< endl;
	if (20 < wei && wei <=30)
		cout << 0.7 * wei + 0.2 << "yuan."<< endl;
	return 0;
}