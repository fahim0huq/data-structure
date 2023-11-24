// 1. Write a program to calculate the Factorial of a number using recursive and non-recursive Method.
#include <bits/stdc++.h>
using namespace std;
int recursive_fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * recursive_fact(n - 1);
}
int non_recursive_fact(int n)
{
    if (n <= 1)
        return 1;
    else
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
}
int main()
{
    long long n;
    cin >> n;
    int ans = recursive_fact(n);
    int ans2 = non_recursive_fact(n);
    cout << ans <<" " << ans2 << endl;
}
