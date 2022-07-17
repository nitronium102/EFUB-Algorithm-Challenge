#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, input;
    set<int> s;

    cin >> n;
    while (n--) {
        cin >> input;
        s.insert(input);
    }

    for (auto iter = s.begin(); iter != s.end(); iter++) { //set 순회
        cout << *iter <<' ';
    }
    return 0;
}