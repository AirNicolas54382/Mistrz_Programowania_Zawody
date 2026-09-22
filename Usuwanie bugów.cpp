#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned long long a, n, b = 0;
    cin >> n;
    a = n % 2;
    b = n / 2;
    n = n + b + a;
    cout << n;
}


