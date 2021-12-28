

#include <iostream>
using namespace std;


int main()
{
	float a, b, c;
	cout << "enter the value of sides a,b,c: ";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Equilateral Triangle ";
	else
	{
		if (a != b && b != c && a != c)
			cout << "scalene triangle ";
		else
			cout << " Isoceles triangle ";
	}

	system("pause>0");

}

