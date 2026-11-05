#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> w(n);

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        int left_count = 0, right_count = 0;
        long long left_sum = 0, right_sum = 0;
        int max_candies = 0;

        while (left_count + right_count < n)
        {
            if (left_sum == right_sum)
            {
                max_candies = max(max_candies, left_count + right_count);
            }

            if (left_sum <= right_sum)
            {
                left_sum += w[left_count];
                left_count++;
            }
            else
            {
                right_sum += w[n - 1 - right_count];
                right_count++;
            }
        }

        if (left_sum == right_sum && left_count + right_count <= n)
        {
            max_candies = max(max_candies, left_count + right_count);
        }

        cout << max_candies << endl;
    }

    return 0;
}