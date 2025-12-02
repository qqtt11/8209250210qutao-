# include <iostream> 
using namespace std;
int main() {
	int total, day;
	day = 0;
	total = 0;
	for (int count = 2; count <= 100;count = count * 2 )
	{
		day++;
		total += count;
	}
	cout << "平均每天花的钱:" << total * 0.8 / day << endl;
	return 0;
}