#include<iostream>
using namespace std;

{
	int n;
	cout << "enter number:";
	if (n >= 0 && n <= 10) {
		if (n % 2 == 0) {
			cout << "even";
			if (n > 5) {
				cout << "bigger5";
			}
		}
	}
	return 0;
}