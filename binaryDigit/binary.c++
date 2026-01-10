#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;
        pow *= 10;
        ans += rem * pow;
    }
    return ans;
}

int main () {
    int decNum;
    cout << "Enter Any Digit To Find Binary Number : ";
    cin >> decNum;

    cout << decToBinary(decNum) << endl;
    return 0;
}