#include <iostream>
#include <cmath>
#include "exc.mean.h"
#include <stdexcept>

double hmean(double a, double b) throw(bad_hmean::bad_bad);


int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "두 수를 입력하십시오: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화평균은 "
				<< z << "입니다. \n";
		}
		catch (bad_hmean::bad_bad &bad)
		{
			cout << bad.what();
			break;
		}
	}
	cout << "프로그램을 종료합니다. \n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean::bad_bad();
	return 2.0 * a * b / (a + b);
}