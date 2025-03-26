#include <iostream>
using namespace std
void towerOfHaNoi(int n, char from_rod, char to_rod, char aux_rod);
void towerOfHaNoi(int n, char from_rod, char to_rod, char aux_rod) {
	if (n == 1) {
		cout << "Move disk 1 form " << from_rod << " to " << to_rod << endl;
		return;
	}
	towerOfHaNoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;
	towerOfHaNoi(n - 1, aux_rod, to_rod, from_rod);
}
int main(){
  	int n = 3;
		towerOfHaNoi(n, 'A', 'B', 'C');
  return 0;
}
