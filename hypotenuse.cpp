#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

long double hypotenuse(int a, int b) {
	return pow(a * a + b *b, 0.5);
}

int main() {
	cout << setprecision(15) << hypotenuse(179, 971) << endl;
	return 0;
}
