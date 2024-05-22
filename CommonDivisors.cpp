#include <cmath>
#include <iostream>
using namespace std;

const int MAX_VAL = 1e6;

int divisors[MAX_VAL + 1];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int div = 1; div*div <= a; div++) {
			if (a % div == 0) {
				divisors[div]++;
				if (div != a / div) 
				{
					 divisors[a / div]++; 
				}
			}
		}
	}
	for (int i = MAX_VAL; i >= 1; i--) {
		if (divisors[i] >= 2) {
			cout << i << endl;
			break;
		}
	}
}