#include<iostream>
using namespace std;
int main()
{
	int n,num,biggest,smallest,i;
	biggest=0;
	smallest=0;
	cin>>n;
	if(n<1||n>1000)
		cout<<"False!"<<endl;
	else
	{
	    for(i=1;i<=n;i++)
	   {
		   cin>>num;
		   if(num<0)
		       cout<<"False!"<<endl;
		   else
		   {
		        if(biggest == 0 && smallest == 0) 
			        biggest = smallest = num;
		       else if(num<smallest)
		           smallest=num;
		        else if(num>biggest)
			        biggest=num;
	       }
	    }
        cout<< biggest-smallest<<endl;
    }
	return 0;
}