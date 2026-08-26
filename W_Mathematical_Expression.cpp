#include <iostream>
using namespace std;

/*
          Mathematical Expression

Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input:
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 10^5 ≤ C ≤ 10^5) and S can be ('+', '-', '*') without the quotation.

Output:
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples-->
Input:
5 + 10 = 15
Output:
Yes

Input:
3 - 1 = 2
Output:
Yes

Input:
2 * 10 = 19
Output:
20
*/

int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    int result;

    if (S == '+')
    {
        result = A + B;
    }
    else if (S == '-')
    {
        result = A - B;
    }
    else if (S == '*')
    {
        result = A * B;
    }

    if (result == C)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }

    return 0;
}