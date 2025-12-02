#include <iostream>
using namespace std;
int main() {
	char zimu;
	cout << "请输入一个字母（大小写均可）" << endl;
	cin >> zimu;
	if (zimu >= 'a' && zimu <= 'z')
	{
		cout << char(zimu - 32) << endl;
	}
	if (zimu >= 'A' && zimu <= 'Z')
	{
		cout << int(zimu + 1) << endl;
	}
	return 0;
}