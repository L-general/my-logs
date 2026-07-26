#include <iostream>
using namespace std;
typedef long long ll;
const int mod = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // ans = floor(n/2) + 1, 对 mod 取模
        ll ans = (n / 2 + 1) % mod;
        cout << ans << '\n';
    }
    return 0;
}
