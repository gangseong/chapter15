#pragma once
#include <iostream>
#include <string>
class bad_hmean
{
private:
	double v1;
	double v2;
public:  
	class bad_bad :public std::logic_error
	{
	public:
		explicit bad_bad(const std::string& s = "hmean�Լ� a == -b�̹Ƿ� ���ܹ߻�! \n");
		virtual ~bad_bad() throw() {}
	};
	bad_hmean(double a =0, double b = 0) :v1(a), v2(b) {}	
};

