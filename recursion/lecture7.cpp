#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size, vector<int> &v, int s, int sum, int ind)
{
    if (ind == size)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    v.push_back(arr[ind]);
    s += arr[ind];

    print(arr, size, v, s, sum, ind + 1);

    s -= arr[ind];
    v.pop_back();

    print(arr, size, v, s, sum, ind + 1);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 3;
    vector<int> v;

    print(arr, n, v, 0, sum, 0);
    return 0;
}