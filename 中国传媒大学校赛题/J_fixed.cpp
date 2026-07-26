#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct su
{
    int shu;
    int lon;
};
int main()
{
    int n, k;
    cin >> n >> k;
    int Ans = 0;
    int on = n;
    vector<su> v;
    while (n--)
    {
        string s;
        cin >> s;
        su sum = {0, 0};
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
        sum.shu = temp[0] + temp[1] + temp[2];
        sum.lon = s.length();
        v.push_back(sum);
    }
    sort(v.begin(), v.end(), [](const su& a, const su& b) {
        if (a.shu != b.shu) return a.shu < b.shu;
        return a.lon < b.lon;
    });
    int idx = on - 1;
    while (k > 0 && idx >= 0)
    {
        if (v[idx].shu == 3)
        {
            idx--;
        }
        else if (v[idx].shu == 2 && v[idx].lon > 2)
        {
            v[idx].shu = 3;
            k--;
            idx--;
        }
        else if (v[idx].shu == 2 && v[idx].lon == 2)
        {
            idx--;
        }
        else if (v[idx].shu == 1 && k >= 2 && v[idx].lon > 2)
        {
            v[idx].shu = 3;
            k = k - 2;
            idx--;
        }
        else if (v[idx].shu == 1 && k >= 2 && v[idx].lon == 2)
        {
            v[idx].shu = 2;
            k--;
            idx--;
        }
        else if (v[idx].shu == 1 && v[idx].lon == 1)
        {
            idx--;
        }
        else if (v[idx].shu == 1 && k == 1)
        {
            v[idx].shu = 2;
            k--;
            idx--;
        }
        else
        {
            // 理论上不会到达这里（所有情况已覆盖）
            idx--;
        }
    }
    for (int i = 0; i < on; i++)
    {
        if (v[i].shu == 3)
        {
            Ans += 4;
        }
        else if (v[i].shu == 2)
        {
            Ans += 2;
        }
        else if (v[i].shu == 1)
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
