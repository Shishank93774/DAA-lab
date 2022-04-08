
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
    int key;
    cin >> key;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int tf = arr[i] - key;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == tf)
            {
                cout << arr[i] << " "<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("q3_input.txt", "r", stdin);
    freopen("q3_output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}