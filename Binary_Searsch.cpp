#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int i = 0;
    int mid, left, right;
    left = 0;
    right = n - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -2;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << binary_search(a, n, x) + 1 << endl;
}