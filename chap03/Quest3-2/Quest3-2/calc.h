#ifndef __CALC_H__
#define __CALC_H__

class Calculator {
private:
	int plus;
	int minus;
	int times;
	int divides;
public:
	void Init();
	double Add(double a, double b);
	double Min(double a, double b);
	double Tim(double a, double b);
	double Div(double a, double b);
	void ShowOpCount();
};

#endif // !__CALC_H__