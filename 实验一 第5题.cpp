#include <iostream>
using namespace std;
int main() {
	cout << "请输入华氏温度" << endl;
	double h, c;
	cin >> h;
	c = (h - 32) / 1.8;
	cout << "相应的摄氏温度:" << c << endl;
	return 0;
}