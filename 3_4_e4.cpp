#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n != 0)
		cout<<"[1] apples"<<endl<<"[2] pears"<< endl<< "[3] oranges"<< endl<<"[4] grapes"<< endl<< "[0] Exit"<< endl<< "price = ";
	switch(n)
	{
	case 1:cout<<"3.0";break;	
	case 2:cout<<"2.5";break;
	case 3:cout<<"4.1";break;
	case 4:cout<< "10.2";break;
	}
	return 0;
}