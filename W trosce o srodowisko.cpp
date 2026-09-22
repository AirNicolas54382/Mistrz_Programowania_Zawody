#include <string>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, c, wynik, d;
    string gazeta, b;
    cin >> gazeta >> a;
    string lista[a];
    for(int i = 0; i<a; i++){
        cin >> lista[i];
    }
    c = gazeta.size();
    for(int o = 0; o<a; o++){
    wynik = 0;
    b = lista[o];
    d = b.size();
    for(int i = 0; i<c; i++){
            cout << b[i] << endl;
        if(b[i] == gazeta[i]){
            wynik++;

        }
        if(wynik==d){
            break;
        }
    }
    if(wynik==d){
        cout << "TAK" << endl;
    }else{
        cout << "NIE" << endl;
    }
    }

}
