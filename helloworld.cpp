#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	std::cout << "hello world!\n" << std::endl;
	cout << "hello cpp" << endl;

	int number1 = 0, number2 = 0, sum = 0;
	cout << "please input number1:";
	cin >> number1;
	cout << "please input number2:";
	cin >> number2;
	sum = number1 + number2;
	cout << sum << endl;

	return 0;
}

