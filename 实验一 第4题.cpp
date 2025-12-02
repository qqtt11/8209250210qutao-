#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in unsigned char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in unsigned short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in unsigned int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in unsigned double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in unsigned double type:" << setprecision(4) <<static_cast<double>(testUnint) << endl;
	cout << "output in unsigned Hex unsigned int type:" << hex << testUnint << endl;
	cout << "output in unsigned Oct unsigned int type:" << oct << testUnint << endl;
	double a = 0.2;
	cout << "output in int type:" << static_cast<int>(a) << endl;




}
