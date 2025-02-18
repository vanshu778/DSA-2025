#include <iostream>
using namespace std;

int MoveallNegtoLeft(int *a, int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (a[low] < 0)
        {
            low++;
        }
        else if (a[high] > 0)
        {
            high--;
        }
        else
        {
            swap(a[low], a[high]);
        }
    }
}

int main()
{
    int a[] = {23, -5, 1, 3, 40, -33, -21};
    int n = sizeof(a) / sizeof(int);

    cout << "Before moving" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    MoveallNegtoLeft(a, n);

    cout << "After Moving" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}