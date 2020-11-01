#include<iostream>
using namespace std;
int main()
{
	int people,boy,girl;
	cin >> boy >> girl;
	people = boy + girl;
	if ((boy + girl) < 10)
		cout << "water";
	if (((boy + girl) >= 10) && boy > girl)
		cout << "tree";
	if (((boy + girl) >= 10) && boy <= girl)
		cout << "tea";
	return 0;
}