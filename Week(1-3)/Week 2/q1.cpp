#include <iostream>
using namespace std;
#define ln '\n';
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int to_find = 0;
    cin >> to_find;
    int i = 0;
    int j = n - 1;
    int num_count = 0;

    while (i <= j)
    {

        int m = i + (j - i) / 2;
        if (arr[m] == to_find)
        {
            num_count++;
        }
        if (arr[m] < to_find)
            i = m + 1;
        else
            j = m - 1;
    }
    if (num_count == 0)
    {
        cout << "Notfound" << ln;
    }
    else if (num_count > 0)
    {
        cout << to_find << " - " << num_count << ln;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("q1_inp.txt", "r", stdin);
    freopen("q1_output.txt", "w", stdout);
#endif
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
