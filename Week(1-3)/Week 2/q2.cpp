// Given a sorted array of positive integers, design an algorithm and
//  implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = -1, b = -1, c = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    a = i;
                    b = j;
                    c = k;
                }
            }
        }
    }
    if (a != -1 && b != -1 && c != -1)
    {
        cout << a+1 << " " << b+1 << " " << c+1 << endl;
    }
    else
    {
        cout << "No triplet found" << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i]<<" ";
    // }
    // cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("q2_input.txt", "r", stdin);
    freopen("q2_output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}