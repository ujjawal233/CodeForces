// Input:
// 7 3
// 1 2 6 1 1 7 1
// Output:3
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Calculate sum of first window
    int window_sum = 0;
    for (int i = 0; i < k; i++)
    {
        window_sum += a[i];
    }

    int min_sum = window_sum;
    int min_index = 0;

    // Slide the window
    for (int i = k; i < n; i++)
    {
        window_sum = window_sum - a[i - k] + a[i];
        if (window_sum < min_sum)
        {
            min_sum = window_sum;
            min_index = i - k + 1;
        }
    }

    // Output 1-based index
    cout << min_index + 1 << endl;

    return 0;
}