#include<iostream>
using namespace std;
int main()
{
	int i,sum1,sum2;
	sum1=0;
	sum2=0;
	for(i=1;i<=10;i++)
	{
		sum1+=i;
		sum2+=sum1;
	}
	cout<<"S="<<sum2<<endl;
    return 0;
}

