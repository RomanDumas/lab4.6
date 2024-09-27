#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//first solution

	double k = 1;
	double n, S1;
	double S2 = 0;
	cout << "1--------" << endl;
	while (k <= 10) {
		n = 1;
		S1 = 0;
		while(n <= k){
			S1 += sin(k * n);
			n++;
		}
		S2 += S1 / k;
		k++;
	}
	cout << "result  |" << endl << S2 << "|" << endl;
	cout << "2--------" << endl;
	//second solution

	k = 1;
	S2 = 0;
	do {
		S1 = 0;
		n = 1;
		do {
			S1 += sin(k * n);
			n++;
		} while (n <= k);
		S2 += S1 / k;
		k++;
	} while (k <= 10);
	cout << "result  |" << endl << S2 << "|" << endl;
	//third solution

	cout << "3--------" << endl;
	S2 = 0;
	for (k = 1;k <= 10;k++) {
		S1 = 0;
		n = 1;
		for (n = 1;n <= k;n++) {
			S1 += sin(k * n);
		}
		S2 += S1 / k;
	}
	cout << "result  |" << endl << S2 << "|" << endl;
	cout << "4--------" << endl;
	//fourth solution
	S2 = 0;
	for (k = 10;k >= 1;k--) {
		S1 = 0;
		n = 1;
		for (n = k;n >= 1;n--) {
			S1 += sin(k * n);
		}
		S2 += S1 / k;
	}
	cout << "result  |" << endl << S2 << "|" << endl;
	return 0;
}