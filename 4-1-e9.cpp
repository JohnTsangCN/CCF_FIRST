#include<iostream>
using namespace std;
int main()
{
	int i,thei,ahei,sum;
	sum=0;
	cin>>thei;
	if(thei>=100&&thei<=120)
	for(i=1;i<=10;i++)
	{
		cin>>ahei;
		if(ahei<100&&ahei>200)
			cout<<"False!"<<endl;
		else if(thei>=ahei)
			sum=sum+1;
		else if(thei+30>=ahei)
			sum=sum+1;
	}	
	cout<<"Number:"<<sum<<endl;
	return 0;
}