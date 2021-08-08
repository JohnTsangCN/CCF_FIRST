#include<iostream>
using namespace std;
int main()
{
	int i, j, sum1 = 0, sum2 = 0;
	for(i = 2,j = -3;i <= 100,j >= -99;i += 2,j -= 2)
	{
	    sum1=sum1+i;
	    sum2=sum2+j;
	}
	cout<<1+sum1+sum2;
	return 0;
}