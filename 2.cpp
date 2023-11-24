//2. Write a program to find the nth term F, of the Fibonacci sequence using recursive and
//non-recursive method.

#include <bits/stdc++.h>
using namespace std;
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
int recursive_fib(int n)
{
    if (n <= 1)
        return n;
    else
        return recursive_fib(n - 1) + recursive_fib(n - 2);
}
int non_recursive_fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; ++i)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}
int main()
{
    int n;
    cin >> n;
    cout << recursive_fib(n) << endl;
    cout << non_recursive_fib(n) << endl;
}
