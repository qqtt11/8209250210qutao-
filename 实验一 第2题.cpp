#include <iostream>
using namespace std;
int main() {
	cout << "请输入圆锥低的半径，锥高" << endl;
	double r, h, V;
	const double c = 3.1415926;
	cin >> r >> h;
	V = c * r * r * h / 3;
	cout << "圆锥的体积是 " << V << endl;

}