#include <iostream>

using namespace std;

bool is_able_to_make_same_with_addition(string sh, string lo)
{
    for (int i = 0; i < sh.size(); ++i)
    {
        if (lo.substr(i, 1) != sh.substr(i, 1))
        {
            sh.insert(i, lo.substr(i, 1));
            if (sh != lo)
            {
                return false;
            }
        }
    }

    return true;
};

bool is_able_to_make_same_with_replace(string a, string b)
{
    int count = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a.substr(i, 1) != b.substr(i, 1))
        {
            count++;
        }
    }

    if (count > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string a, b;
    cin >> a >> b;

    if (a.size() == b.size())
    {
        cout << is_able_to_make_same_with_replace(a, b);
    }
    else if (a.size() - b.size() == 1)
    {
        cout << is_able_to_make_same_with_addition(b, a);
    }
    else if (b.size() - a.size() == 1)
    {
        cout << is_able_to_make_same_with_addition(a, b);
    }
    else
    {
        cout << false;
    }
}