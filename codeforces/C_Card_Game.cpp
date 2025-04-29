#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> A;
        unordered_map<int, int> B;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (a == 'A')
                A[i]++;
            else
                B[i]++;
        }
        if (A.count(0) && A.count(n - 1))
        {
            cout << "Alice" << endl;
        }
        else if (B.count(0) && B.count(n - 1))
        {
            cout << "Bob" << endl;
        }
        else
        {
            // 0 and n-1 card alag alag bndo par hai
            if (A.count(0) && B.count(n - 1))
            {
                if (B.size() > 1)
                    cout << "Bob" << endl;
                else
                    cout << "Alice" << endl;
            }
            else
            {
                // alice has n-1 and bob has 0
                if (A.count(n - 2))
                    cout << "Alice" << endl;
                else
                    cout << "Bob" << endl;
            }
        }
    }
    return 0;
}