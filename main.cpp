#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    // Complete the code.
    
    int a, b;

    cin >> a >> b;
    
    map<int, string> digitNames;
    
    digitNames.insert(pair<int, string>(1, "one"));
    digitNames.insert(pair<int, string>(2, "two"));
    digitNames.insert(pair<int, string>(3, "three"));
    digitNames.insert(pair<int, string>(4, "four"));
    digitNames.insert(pair<int, string>(5, "five"));
    digitNames.insert(pair<int, string>(6, "six"));
    digitNames.insert(pair<int, string>(7, "seven"));
    digitNames.insert(pair<int, string>(8, "eight"));
    digitNames.insert(pair<int, string>(9, "nine"));
    
    for (auto i = a; i <= b; ++i) {
        if(digitNames.find(i) != digitNames.end()) {
            cout << digitNames.find(i)->second << endl;
        } else {
            if(i%2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
    
    return 0;
}
