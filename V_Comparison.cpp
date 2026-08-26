#include <iostream>
using namespace std;

/*
           Comparison

Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.

Input:
Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

Output:
Print "Right" if the comparison is true, "Wrong" otherwise.

Examples-->
Input:
5 > 4
Output:
Right

Input:
9 < 1
Output:
Wrong

Input:
4 = 4
Output:
Right

*/

int main()
{
    int A, B;
    char S;

    cin >> A >> S >> B;

    if (S == '=' && A == B)
    {
        cout << "Right" << endl;
    }
    else if (S == '>' && A > B)
    {
        cout << "Right" << endl;
    }
    else if (S == '<' && A < B)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}