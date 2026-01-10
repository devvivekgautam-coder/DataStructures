#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main () {
    int size;
    cout << "Enter The Size Of Array : ";
    cin >> size;

    vector<int> array(size);

    map<int, int> freq;

    for (int i = 0; i < size; i++) {
        cout << "Enter The Element Of Array : ";
        cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        freq[array[i]]++;
    }

    for (auto it : freq) {
        cout << "Key : " << it.first << " " << "Value : " << it.second << endl;
    }

    return 0;
}