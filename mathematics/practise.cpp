#include <iostream>
using namespace std;
int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if ((A == B && C == D) || (A == C && B == D) || (A == D && B == C))
    {
        cout << "1";
    }
    else
        cout << "0";
    return 0;
}