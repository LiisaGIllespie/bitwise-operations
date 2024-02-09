#include <iostream>
using namespace std;

int main()
{
	int val1 = 1, // 0000'0001
		val2 = 2, // 0000'0010
		val3 = 3, // 0000'0011
		res = 0;

	res = res | val1; // 0000'0000 | 0000'0001 = 0000'0001
	res = res << 2;   // 0000'0100
	res = res | val2; // 0000'0100 | 0000'0010 = 0000'0110
	res = res << 2;   // 0001'1000
	res = res | val3; // 0001'1000 | 0000'0011 = 0001'1011

	cout << res << endl;
	// ^^^ запись из классса, ниже домашка

	val3 = res & 3;  // 0001'1011 & 0000'0011 = 0001'1000
	res = res >> 2;  // 0000'0110
	val2 = res & 2;  // 0000'0110 & 0000'0010 = 0000'0100
	res = res >> 2;  // 0000'0001
	val1 = res;      

	cout << "val1: " << val1 << "\nval2: " << val2 << "\nval3: " << val3 << endl;

	return 0;
}