#include <iostream>
#include <map>

using namespace std;

int main()
{
    string input;
    cin >> input;

    map<string, bool> dict;

    for (int i = 0; i < input.size(); ++i)
    {
        if (dict.count(input.substr(i, 1)) != 0)
        {
            cout << "duplicate";
            break;
        }

        dict[input.substr(i, 1)] = true;
    }
}