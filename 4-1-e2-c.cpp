#include<iostream>
using namespace std;
int main()
{
	float sum1;
	int i;
	sum1=0;
	for(i=1.0;i<=100.0;i++)
	{
		if(i%2==0)
			sum1-=(float)1/i;
		else
			sum1+=(float)1/i;
	cout<<"S="<<sum1<<endl;
    }
return 0;
}