#include<iostream>
using namespace std;
int main()
{
	int s,i;
	s=0;
	for(i=1;i<=100;i++)
	{     
		if (i%2==0||i==1)  
		    s+=i;
		else 
			s-=i;
	}	
	cout<<"S="<<s<<endl;
	return 0;
}
