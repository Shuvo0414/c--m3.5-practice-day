#include <iostream>
using namespace std;

/*
         Palindrome Array

Given a number 𝑁 and an array 𝐴 of 𝑁 numbers. Determine if it's palindrome or not.

Note:
An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input:
First line contains a number 𝑁 (1≤𝑁≤10^5)
number of elements.Second line contains 𝑁 numbers (1≤𝐴𝑖≤10^9).

Output:
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples-->
Input:
5
1 3 2 3 1
Output:
YES

Input:
4
1 2 3 4
Output:
NO
*/

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        // cout << A[i] << " ";
    }

    int flag = 1;

    int i = 0;
    int j = N - 1;

    while (i < j)
    {
        if (A[i] != A[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}