#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the  number of rows";
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
