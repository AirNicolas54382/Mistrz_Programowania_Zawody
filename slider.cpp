#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned long long x, wynik = 0;
    cin >> x;
    wynik = ((x - 1) / 3) + 1;
    cout << wynik;
}
