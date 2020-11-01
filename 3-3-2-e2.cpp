#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,c,b;
	cin>>a>>b>>c;
	if(a<b+c&&b<a+c&&c<a+b)
	{
	    if (a == b&&a == c)
		    cout << "Yes,deng bian";
	    else if(a*a+b*b == c*c)
		     cout<<"Yes,zhi jiao.";
		else
			cout << "Yes,yi ban";
	}
	else 
		cout<<"No.";
	return 0;
}

