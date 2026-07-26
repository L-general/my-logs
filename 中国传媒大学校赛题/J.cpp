#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int Ans = 0;
    vector<int> v;
    while (n--)
    {
        string s;
        cin >> s;
        int sum = 0;
        int ans = 0;
        int temp[3] = {0, 0, 0};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'r')
            {
                temp[0] = 1;
            }
            else if (s[i] == 'e')
            {
                temp[1] = 1;
            }
            else
            {
                temp[2] = 1;
            }
        }
        sum = temp[0] + temp[1] + temp[2];
        v.push_back(sum);
    }
    sort(v.begin(), v.end());
    int temp = n - 1;
    while (k >= 0 && temp >= 0)
    {
        if (v[temp] == 3)
        {
            temp--;
        }
        else if (v[temp] == 2)
        {
            temp--;
            k--;
            v[temp] = 3;
        }
        else if (v[temp] == 1)
        {
            temp--;
            k--;
            v[temp] = 2;
        }
        else
        {
            temp--;
            k--;
            v[temp] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 3)
        {
            Ans += 4;
        }
        else if (v[i] == 2)
        {
            Ans += 2;
        }
        else if (v[i] == 1)
        {
            Ans += 1;
        }
        else
        {
            Ans += 0;
        }
    }
    cout << Ans;
}