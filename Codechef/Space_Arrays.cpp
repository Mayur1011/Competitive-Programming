/**
 *	author :- Mayur
 *	created :- 2021-03-09 19:07:17
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {

        // TODO: If at any position V[i](orignal vector) < P[i](Permutation vector), then the player loses
        int N;
        cin >> N;
        vector<int> V(N);
        for (auto &i : V)
            cin >> i;
        sort(V.begin(), V.end());
        int turn = 0, flag = 0;
        for (int i = 0; i < N; i++)
        {
            // TODO: If any number in the array V at a particular index is greater than its index(1 based indexing),
            // then Second person will win.
            if (V[i] > (i + 1))
            {
                flag = 1;
                break;
            }
            // TODO: If the number in the array V at a particular index is smaller than its index(1 based indexing), 
            // then we will find the differnce between them(index - array_element) and store it in one variable
            else
            {
                turn += (i + 1) - V[i];
            }
        }
        // If turn is odd then ans is first or else its second.
        (flag == 1) ? cout << "Second\n" : ((turn % 2 != 0) ? cout << "First\n" : cout << "Second\n");
    }

#ifndef ONLINE_JUDGE
    cout << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}