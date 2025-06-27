#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<long long int> prefix(n + 1);
    prefix[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    int l, r;
    long long int sum;
    while (cin >> l >> r)
    {
        if (l == 1)
            sum = prefix[r];
        else
        {
            sum = prefix[r] - prefix[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}

// Time complexity: O(N)