#include <iostream>
#include <climits>
using namespace std;

/*
                      Smallest Pair

Given a number N and an array A of N numbers. Print the smallest possible result of Ai + Aj + j - i , where 1  ≤  i < j  ≤  N.

Input:
The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

Each test case contains two lines:

The first line consists a number N (2 ≤ N ≤ 100) number of elements.
The second line contains N numbers ( - 10^6 ≤ Ai ≤ 10^6).
Output
For each test case print a single line contains the smallest possible sum for the corresponding test case.

Example-->
Input:
1
4
20 1 9 4
Output:
7


Note-->
First Case :

All possibles (i,j) where (1  ≤  i < j  ≤  N) are :

i = 1 , j = 2 then result = a1 + a2 + j - i = 20 + 1 + 2-1 = 22.

i = 1 , j = 3 then result = a1 + a3 + j - i = 20 + 9 + 3-1 = 31.

i = 1 , j = 4 then result = a1 + a4 + j - i = 20 + 4 + 4-1 = 27.

i = 2 , j = 3 then result = a2 + a3 + j - i = 1 + 9 + 3-2 = 11.

i = 2 , j = 4 then result = a2 + a4 + j - i = 1 + 4 + 4-2 = 7.

i = 3 , j = 4 then result = a3 + a4 + j - i = 9 + 4 + 4-3 = 14.

So the smallest possible result is 7.

*/

int main()
{
    int T;
    cin >> T;

    // Run the same logic for every test case.
    while (T--)
    {
        int N;
        cin >> N;

        int A[N];

        // Taking input of all array elements.
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        /*
        Alternative way to initialize minSum:

        int minSum = A[0] + A[1] + (1 - 0);

        Here we take the first possible pair:
        A[0] and A[1]

        Example:
        A = {20, 1, 9, 4}

        minSum = 20 + 1 + (1 - 0)
               = 22

        Then we compare all other possible pairs
        and update minSum if we find a smaller result.

        But INT_MAX is usually preferred because
        it does not depend on choosing any specific pair.
        */

        // Initialize minimum answer with the largest possible integer value.
        int minSum = INT_MAX;

        /*
        Check every possible pair (i, j).

        The problem uses 1-based indexing,
        but C++ arrays use 0-based indexing.

        Problem:
        i < j

        C++:
        i < j

        The relationship stays the same.

        j starts from i + 1 because we need:
        first index < second index
        */
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                // Calculate the result for the current pair.
                int sum = A[i] + A[j] + (j - i);

                // If the current result is smaller, update the minimum value.
                if (sum < minSum)
                {
                    minSum = sum;
                }
            }
        }

        cout << minSum << endl;
    }

    return 0;
}