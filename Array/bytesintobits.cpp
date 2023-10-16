#include <iostream>
using namespace std;

int main() {
    int bytes;

    cout << "Enter the number of bytes: ";
    cin >> bytes;
    int bits = bytes * 8;
    cout << bytes << " bytes is equivalent to " << bits << " bits." <<endl;
    return 0;
}
