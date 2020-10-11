#include <iostream> 
using namespace std;

long factorial(long number) {
	if (number == 0 || number == 1)
		return 1;
	long result = 1;
	for (int i = 1; i <= number; i++)
		result *= i;
	return result;
}

int main() {
	cout << factorial(20) << endl;
	return 0;
}
