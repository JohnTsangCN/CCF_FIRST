#include<iostream>
using namespace std;
int main ()
{
	float price;
	int count;
	cin >> price >> count;
	if(count < 5)
		cout<< price * count *1.0 << "yuan.";
	else if(5 <= count && count < 10)
	{
		cout << price * count * 0.9 << "yuan." ;
	}
     else if(count >= 10)
		cout << price * count * 0.8 <<"yuan.";
	return 0;
}