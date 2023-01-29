
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello, World!";

    // using reverse function
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;

    return 0;
}