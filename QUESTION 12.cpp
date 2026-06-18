#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if (num % 2 == 0 && num % 3 == 0)
        cout << "Divisible by 2 and 3";
    else
        cout << "Not divisible by 2 and 3";
    return 0;
}

