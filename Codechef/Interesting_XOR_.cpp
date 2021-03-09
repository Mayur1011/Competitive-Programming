/**
 *	author :- Mayur
 *	created :- 2021-03-08 17:13:09
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define sout(x) cout << #x << " is : " << x << '\n';
#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll, vt<ll>, greater<ll>>
#define setbits(x) __builtin_popcountll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define EACH(x, a) for (auto &x : a)
#define FOR(var, start, size) for (ll var = start; var < size; var++)
#define testcases()   \
    int testcases;    \
    cin >> testcases; \
    while (testcases--)
const ll modo = 1e9 + 7;
const ll INF = 1e17;
const char nl = '\n';
const ll ms = 1e5 + 5;
void cp()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main()
{

    cp();
    testcases()
    {
        int c;
        cin >> c;
        ll i, temp, number_of_ones = 0, bits_in_ans = 0;
        temp = c;
        i = 0;
        while (temp != 0)
        {
            if (temp % 2 == 1)
            {
                ++number_of_ones;
            }
            ++bits_in_ans;
            temp /= 2;
        }
        // cout << os << " " << s;
        int a[bits_in_ans], b[bits_in_ans];
        temp = c;
        while (temp != 0)
        {
            if (temp % 2 == 1)
            {
                if (number_of_ones == 1)
                {
                    a[i] = 1;
                    b[i] = 0;
                }
                else
                {
                    a[i] = 0;
                    b[i] = 1;
                }
                number_of_ones--;
            }
            else
            {
                a[i] = 1;
                b[i] = 1;
            }
            i++;
            temp /= 2;
        }
        ll v = bits_in_ans;
        ll tempb = 1, n1 = 0, n2 = 0;
        i = 0;
        while (i < v)
        {
            n1 += tempb * a[i];
            n2 += tempb * b[i];
            tempb *= 2;
            i++;
        }
        cout << n1 * 1ll * n2 << endl;
    }

#ifndef ONLINE_JUDGE
    cout << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}