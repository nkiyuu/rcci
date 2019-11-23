#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string judge = s1 + s1;

    // find が isSubstring みたいな感じ
    cout << judge.find(s2);
}