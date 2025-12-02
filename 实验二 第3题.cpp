#include <iostream>
using namespace std;
int main() {
	cout << "请输入三角形的三条边" << endl;
	double a, b, c, C;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		C = a + b + c;
		cout << "三角形的周长是" << C << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "这三边不能构成三角形" << endl;
	}
	return 0;
}