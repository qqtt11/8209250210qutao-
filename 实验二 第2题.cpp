#include <iostream>
using namespace std;
int main() {
	cout << "请输入x的值(10>=x>0)" << endl;
	double x, y;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
		cout << "y的值等于" << y << endl;
	}
	else if (x >=1 && x < 5)
	{
		y = 2/4/x+1;
		cout << "y的值等于" << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x*x;
		cout << "y的值等于" << y << endl;
	}
	else
	{
		cout << "您输入的值不在定义域里面" << endl;
	}
	return 0;
}
