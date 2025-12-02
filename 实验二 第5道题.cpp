#include <iostream>
using namespace std;
int main() {
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "请输入一串字符" << endl;
	while ((c = cin.get()) != '\n')
	{
		 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			letters++;
		}
		 else if (c == ' ')
		 {
			 spaces++;
		 }
		else if (c >= '0' && c <= '9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	cout << "字母：" << letters <<endl;
	cout << "空格：" << spaces <<endl; 
	cout << "数字：" << digits <<endl;
	cout << "其他：" << others <<endl;
	return 0;

}