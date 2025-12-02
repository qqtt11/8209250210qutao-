#include <iostream>
using namespace std;
int main() {
	double num1, num2;
	char a;
	cout << "请输入一个计算表达式" << endl;
	cin >> num1 >> a >> num2;
		switch (a)
		{
		case '+':
			cout << "计算结果是" << num1 + num2 << endl;
			break;
		case '-':
			cout << "计算结果是" << num1 - num2 << endl;
			break;
		case '*':
			cout << "计算结果是" << num1 * num2 << endl;
			break;
		case '/':
			if (num2 != 0)
			{
				cout << "计算结果是" << num1 / num2 << endl;
				break;
			}
			else
			{
				cout << "除数为0，无法进行运算" << endl; 
				break;
			}
		case '%':
			if (num2 != 0)
			{
				cout << "计算结果是" << (static_cast<int>(num1)) % (int(num2)) << endl;
				break;
			}
			else
			{
				cout << "除数为0，无法进行运算" << endl;
				break;
			}
		default:
			cout << "您输入的运算符号非法" << endl;
		}
		return 0;
}