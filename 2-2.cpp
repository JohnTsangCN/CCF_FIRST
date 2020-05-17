#include <iostream>
#include <iomanip>
#include <cfloat>

using namespace std;

int main()
{
	int age;
	age = 12;
	float height = 1.456;
	cout << "age: " << age << endl;
	cout << "height: " <<  fixed << setprecision(8) << height << endl;
	cout << "min float: " << FLT_MIN << endl;
	cout << "max float: " << FLT_MAX << endl;
	return 0;
}