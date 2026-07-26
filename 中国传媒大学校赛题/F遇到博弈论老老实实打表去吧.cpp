#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n >= 8 && n != 9 && n != 11)
            cout << "kou\n";
        else
            cout << "yukari\n";
    }
}