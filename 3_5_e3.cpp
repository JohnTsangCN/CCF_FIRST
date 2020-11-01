#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,x;
	cin >> x ;	
	 if(x<10&&x>=0)
		cout<<"zhe shi yi ge ge wei shu.";	
	else if(x>=10&&x<100)
		cout<< "zhe shi yi ge shi wei shu.";
	else if(x>=100&&x<1000)
		cout<<"zhe shi yi ge bai wei shu.";
	else if(x / 1000 >=0&&x < 10000)
		cout<<"zhe shi yi ge qian wei shu.";
	d = x%1000%100%10;
	cout<<" ge wei :   "<<d;
	c = (((x%1000%100)-d)/10);
	cout<<" shi wei :  "<<c;
	b = ((x%1000-10*c-d)/100);
	cout<<" bai wei :  "<<b;
	a = ((x-100*b-10*c-d)/1000);
	cout<<" qian wei :  "<<a;
	return 0;
}