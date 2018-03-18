#pragma once
class A
{
	int a;
	int b;
public:
	A(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	~A()
	{
	}
	int sum()
	{
		return a + b;
	}
	int max()
	{
		if (a >= b)
			return a;
		else
			return b;
	}
};
