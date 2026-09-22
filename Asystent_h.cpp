#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long a, wynik;
    cin >> a;
    wynik = a % 1000000007;
    //wynik = a - wynik;
    cout << wynik;


}
