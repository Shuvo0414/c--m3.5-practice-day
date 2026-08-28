#include <iostream>
#include <algorithm>

using namespace std;

/*
                     H. Sorting

Given a number N and an array A of N numbers. Print the numbers after sorting them.

Note:
->Don't use built-in-functions.
->try to solve it with bubble sort algorithm or Selection Sort.
->for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.

Input:
First line contains a number N (0 < N < 10^3) number of elements.
Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

Output:
Print the numbers after sorting them.

Examples-->
Input:
3
3 1 2
Output:
1 2 3

Input:
4
5 2 7 3
Output:
2 3 5 7
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

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }

    // sort(A, A + N);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}