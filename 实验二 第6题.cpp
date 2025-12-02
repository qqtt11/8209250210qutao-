#include <iostream>
using namespace std;
int main() {
	int a, b, temp, gcd, lcm;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	int original_a = a, original_b = b;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	gcd = a;
	lcm = original_a * original_b / gcd;
	cout << "两个数的最小公倍数是：" << lcm << endl;
	cout << "两个数的最大公约数是：" << gcd << endl;
	return 0;
}