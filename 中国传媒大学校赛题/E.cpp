#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        vector<double> v;
        double x1 = log(a + b);
        double x2 = log(a) + log(b);
        double x3 = b * log(a);
        double x4 = a * log(b);
        v.push_back(x1);
        v.push_back(x2);
        v.push_back(x3);
        v.push_back(x4);
        double temp = v[c - 1];
        sort(v.begin(), v.end());
        if (temp == v[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
        // cout << temp << endl;
        // cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
    }
}