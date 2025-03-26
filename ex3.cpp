#include <iostream>
using namespace std;
void generateBinaryStrings(int n, string currentString = "");
void generateBinaryStrings(int n, string currentString = "") {
    if (currentString.length() == n) {
        cout << currentString << endl;
        return;
    }
    
    generateBinaryStrings(n, currentString + "0");
    generateBinaryStrings(n, currentString + "1");
}

int main() {
    int n;
    cin>>n;
    generateBinaryStrings(n);
    return 0;
}
