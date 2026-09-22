#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned long long a, b, wynik;

    cin >> a >> b;

    wynik = (b/a)*b;
    cout << wynik;

}
