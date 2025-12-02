#include <iostream>
using namespace std;
int main() {
	double a, xn, xn1,temp;
	cout << "请输入一个数" << endl;
	cin >> a;
	xn = a;
	if (a < 0) 
	{
		cout << "负数没有平方根" << endl;
	}
	else if (a == 0)
	{
		cout << "平方根是：0" << endl;
	}
	else
	{
		do {
			xn1 = 0.5 * (xn + a / xn);
			temp = xn;
			xn = xn1;
		} while (fabs(xn1 - temp) >= 1e-5);
		cout << "平方根是：" << xn1 << endl;
	}
	return 0;
}