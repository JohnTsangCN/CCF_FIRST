#include<iostream>
using namespace std;
int main()
{
	int n,i,gol,sil,bro,sum1,sum2,sum3,tot;
	sum1=0;
	sum2=0;
	sum3=0;
	cin>>n;
	if(n>=1&&n<=17)
	for(i=1;i<=n;i++)
	{
		cin>>gol>>sil>>bro;
		if(gol>=0&&sil>=0&&bro>=0)
		sum1=sum1+gol,
		sum2=sum2+sil,
		sum3=sum3+bro;
		else 
		cout<<"False!"<<endl;
	}
	tot=sum1+sum2+sum3;
	cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<tot;
	return 0;
}