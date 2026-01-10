#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main () {
    string name;
    
    cout << "Enter Any Word : ";
    cin >> name;

    map<char, int> freq;

    for (int i = 0; name[i] != '\0'; i++) {
        freq[name[i]]++;
    }

    for (auto it : freq) {
        cout << it.first << "-->" << it.second << endl;
    }

    return 0;
}