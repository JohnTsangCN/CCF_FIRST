#include<iostream>
using namespace std;
int main()
{
	int i,sum1=0,sum2 = 0,sum3=1;
	for(i=2;i<=100;i++)
	{
		sum1+=i;
		sum2 = 1/sum1;
		sum3-=sum2;
		cout << "sum1:"<<sum1<<"sum2:"<< sum2<< "sum3:" << sum3<<endl; 
	}
	cout << "sum3:" << sum3;
	return 0;
}