#include<iostream>
using namespace std;
int main()
{
	float dis,t1,t2;
	cin>>dis;
	t1=dis/3.0+50;
	t2=dis/1.2;
	cout<<t1<<t2<<endl;
	if(t1>t2)
		cout<<"Walk"<<endl;
	else
		if(t1<t2)
			cout<<"Bike"<<endl;
		else if(t1==t2)
			cout<<"The same"<<endl;
	return 0;
}