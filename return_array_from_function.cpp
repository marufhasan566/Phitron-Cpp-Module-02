#include <bits/stdc++.h>
using namespace std;
int *func()
{
    int *a = new int[5];
    // int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int *b = func();
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << "\t ";
    }
    cout << endl;
    // delete[] b;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << b[i] << "\t ";
    // }

    return 0;
}