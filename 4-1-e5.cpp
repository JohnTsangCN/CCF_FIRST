#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,a;
	unsigned long long sum;
	a=1.42*pow(10,8);
	for(i=1;i<=64;i++) 
		sum=sum+pow(2,i-1);
	cout<<sum/a<<endl;	
	return 0;
}