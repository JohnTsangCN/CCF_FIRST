#include<iostream>
using namespace std;
int main()
{
	float x;
	cin>>x;
	if(x<0||x>20)
		cout <<"gei lao zi gun!";
	else if(0<=x&&x<5)
		cout << "y = "<< x +2.5;
	else if(5<=x&&x<10)
		cout << "y = "<< 2 -1.5*(x-3)*(x-3);
	else if(10<=x&&x<20)
		cout << "y = "<<x/2-1.5;
	return 0;
}