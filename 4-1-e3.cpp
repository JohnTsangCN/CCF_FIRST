#include<iostream>
using namespace std;
int main()
{
	int n,age,sum,i;
	cin>>n;
	sum=0;
	for(i=1;i<=n;i++)
	{
		cin>>age;
		if(15<=age&&age<=25)
			sum += age;
		else
			cout<<"The age of the student is not true!"<<endl;
	}
	if (n > 0)
	    cout<<"The average age is "<<(float)sum/n<<endl;
	else
		cout << "The number of students must be larger than 0" << endl; 
	return 0;
}