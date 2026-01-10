#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    string s1;
    string s2;

    cout << "Enter First String : ";
    cin >> s1;

    cout << "Enter Second String : ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagram" << endl;
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2) {
        cout << "Anagram" << endl;
    }
    else {
        cout << "Not Anagram" << endl;
    }

    return 0;
}