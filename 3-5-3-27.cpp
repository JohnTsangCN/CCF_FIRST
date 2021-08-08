#include<iostream>
using namespace std;
int main()
{
	float dis;
	cin>>dis;
	if(dis/3.0+50.0>dis/1.2)
		cout<<"Walk"<<endl;
	else if(dis/3.0+50.0<dis/1.2) {
		cout << dis/3.0+50.0 << endl;
		cout << dis/1.2<<endl;
		cout<<"Bike"<<endl;
	}
	else //if(dis/3.0+50.0==dis/1.2)
		cout<<"The same"<<endl;
	return 0;
}