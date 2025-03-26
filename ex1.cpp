#include <iostream>
using namespace std;

int Fibonancci(int);
int Fibonancci(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return Fibonancci(n - 1) + Fibonancci(n - 2);
}
int main(){
		int n;
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = Fibonancci(i);
			cout << a[i] << " ";
		}
	}
