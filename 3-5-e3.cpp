#include<iostream>
using namespace std;
int main()
{
	int num,a,b,c,d;
	cin>>num;
	if(num>=1000&&num<10000)
	{
		a=num/1000;
		b=(num%1000)/100;
		c=(num%1000%100)/10;
		d=num%1000%100%10;
		cout<<"qian wei shu     "<<"qian wei:"<<a<<"   bai wei:"<<b<<"   shi wei:"<<c<<"   ge wei"<<d<<endl;
	}
	else if(num>=100&&num<1000)
	{
		b=num/100;
		c=(num%100)/10;
		d=num%100%10;
		cout<<"bai wei shu     "<<"bai wei:"<<b<<"   shi wei:"<<c<<"   ge wei"<<d<<endl;
	}
	else if(num>=10&&num<100)
	{
		c=num/10;
		d=num%10;
		cout<<"shi wei shu     "<<"shi wei:"<<c<<"   ge wei"<<d<<endl;
	}
	else if(num>=1&&num<10)
		cout<<"ge wei shu     "<<"ge wei:"<<num<<endl;
	return 0;
}