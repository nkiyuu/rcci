#include <iostream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for (int i = 0; i < input.size(); ++i)
    {
        if (input.substr(i, 1) == " ")
        {
            cout << "%20";
        }
        else
        {
            cout << input.substr(i, 1);
        }
    }
}