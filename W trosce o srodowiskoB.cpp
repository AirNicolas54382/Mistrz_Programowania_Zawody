#include <string>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, c, n;
    int n_zapis= -1;
    int zezwolenie = 1;
    string gazeta, b, gazeta_zapis;
    cin >> gazeta >> a;
    string lista[a];
    for(int i = 0; i<a; i++){
        cin >> lista[i];
    }

    for(int i = 0; i<a; i++){
    zezwolenie = 1;
    gazeta_zapis = gazeta;
    b = lista[i];
    c = b.size();
    for(int i = 0; i<c; i++){
    n = gazeta_zapis.find_first_of(b[i]);
    if(n<0){
        zezwolenie = 0;
        cout << "NIE"<<endl;
        break;
    }
    gazeta_zapis = gazeta_zapis.substr(n+1, gazeta_zapis.back());
    }
    if(zezwolenie == 1){
        cout << "TAK" << endl;
    }
    }

}
