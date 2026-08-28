#include <iostream>
#include <algorithm>

using namespace std;

/*
                       Sort String

Given a number 𝑁 and a string 𝑆 of size 𝑁. Print 𝑆 after sorting it.

Note : don't use built-in function and it's recommended to not solve this problem with python language.

Input:
The first line contains a number 𝑁 (1≤𝑁≤10^7) size of string 𝑆.

The second line contains a string 𝑆 consists of lowercase English letters.

Output:
Print 𝑆 after sorting it.

Examples-->
Input:
4
deab
Output:
abde

Input:
5
egypt
Output:
egpty


*/

int main()
{
    int N;
    cin >> N;

    char S[N];

    // Taking input of each character of the string into the character array.
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    /*
    Using Bubble Sort to sort the characters manually.

    Characters are compared using their ASCII values.
    For lowercase English letters:

    'a' < 'b' < 'c' < ... < 'z'

    So, when S[j] is greater than S[j + 1],
    we swap them.
    */
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (S[j] > S[j + 1])
            {
                // Store the first character temporarily before swapping.
                char temp = S[j];

                // Move the next character to the current position.
                S[j] = S[j + 1];

                // Put the original character into the next position.
                S[j + 1] = temp;
            }
        }
    }

    /*
    Built-in sort() can also sort the character array,
    but the problem says not to use built-in functions.

    sort(S, S + N);
    */

    for (int i = 0; i < N; i++)
    {
        cout << S[i];
    }

    return 0;
}