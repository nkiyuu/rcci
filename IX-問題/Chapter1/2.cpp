#include <iostream>

using namespace std;

int main()
{
    string string_a, string_b;
    cin >> string_a >> string_b;

    if (string_a.size() != string_b.size())
    {
        cout << "not";
    }

    sort(string_a.begin(), string_a.end());
    sort(string_b.begin(), string_b.end());

    if (string_a == string_b)
    {
        cout << "match";
    }
    else
    {
        cout << "not";
    }
}