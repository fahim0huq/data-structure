//3. Write a program to implement Ackermann Function.
#include <bits/stdc++.h>
using namespace std;

int A(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (m!=0 && n == 0)
        return A(m - 1, 1);
    else if(m!=0 && n!=0)
        return A(m - 1, A(m, n - 1));
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << A(m, n) << endl;
}