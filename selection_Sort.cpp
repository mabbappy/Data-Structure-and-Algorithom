#include <bits/stdc++.h>
using namespace std;
void selection_sort(int a[], int n)
{
    int index_min, i, j;
    for (int i = 0; i < n - 1; i++) // we use i<(n-1) because we do not need to check the last element !
    {
        index_min = i;
        for (int j = i + 1; j < n; j++) // by defult it will check the last element so we use n;
        {
            if (a[index_min] > a[j])
            {
                index_min = j;
            }
            if (index_min != i)
            {
                int temp = a[i];
                a[i] = a[index_min];
                a[index_min] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selection_sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}