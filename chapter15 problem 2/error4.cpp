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

	cout << "�� ���� �Է��Ͻʽÿ�: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "�� ��ȭ����� "
				<< z << "�Դϴ�. \n";
		}
		catch (bad_hmean::bad_bad &bad)
		{
			cout << bad.what();
			break;
		}
	}
	cout << "���α׷��� �����մϴ�. \n";
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean::bad_bad();
	return 2.0 * a * b / (a + b);
}