#include <vector>
#include <iostream>
using namespace std;
void Sprawdzanko(int, int, int, int , int);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned int a, b, c;
    cin >> a;
    string nazwy[a];
    vector<int> r;
    int wynikA[a];
    int wynikB[a];
    int wynikC[a];
    for(int i = 0; i<a; i++){
        cin >> nazwy[i];
        for(int i = 0; i<5; i++){
            cin >> b;
            r.push_back(b);
        }

    }
    /*for(int i = 0; i<30; i++){
        cout << r[i] << " ";
    }*/
    int k = 0, ultrawynik;
    for(int i = 0; i<a; i++){
        Sprawdzanko(r[k], i, wynikA, wynikB, wynikC);
        Sprawdzanko(r[k + 1] , i, wynikA, wynikB, wynikC);
        Sprawdzanko(r[k + 2] , i, wynikA, wynikB, wynikC);
        Sprawdzanko(r[k + 3] , i, wynikA, wynikB, wynikC);
        Sprawdzanko(r[k + 4] , i, wynikA, wynikB, wynikC);
        ultrawynik = r[k] + r[k+1] + r[k+2] + r[k+3] + r[k+4];
        wynikC[i] = ultrawynik;
        k = k + 5;
    }}
void Sprawdzanko(int o , int i, int wynikA[],){
    if(o == 0){
        wynikA[i] = wynikA[i] + 1;
    }else if (o == 500){
        wynikB[i] = wynikB[i] + 1;

}}
