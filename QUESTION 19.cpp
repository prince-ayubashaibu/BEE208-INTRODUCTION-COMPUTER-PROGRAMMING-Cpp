#include <iostream>
#include <bitset>
using namespace std;
int main() {
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;
    int decimal = stoi(binary, 0, 2);
    cout << "Decimal = " << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;
    cout << "Hexadecimal = " << hex << uppercase << decimal << endl;
    return 0;
}
