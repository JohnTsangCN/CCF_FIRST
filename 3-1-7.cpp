#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int money,pear_trees,peach_trees,apple_trees;
	cin >> money;
	pear_trees = 500;
	peach_trees = 600;
	apple_trees = 800;
	if (money<100000)
	cout << "zhong"<< (int)money / pear_trees << "ke li shu" << endl;
	else
	cout << " zhong " << (int)money * 10 / 3 / pear_trees << " ke li shu, " << (int)money * 10 / 5 / peach_trees << " ke tao shu he " << (int)money * 10 / 2 / apple_trees << "ke ping guo shu" << endl;
	return 0;
}