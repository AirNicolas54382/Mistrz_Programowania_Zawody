#include <vector>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int a, b;
   int  wynik = 1;
    cin >> a;
    vector<int>lista;
    for(int i = 0; i<a; i++){
        cin >> b;
        lista.push_back(b);
    }
    int k;
    for(int i = 0; i<a; i++){
        wynik = 1;
          for(k = 0; k<a; k++){
            if(k == i){
                continue;
            }else if(lista[k]==0){
            continue;
            }
            wynik = wynik * lista[k];
    }

    cout << wynik << " ";


}
return 0;
}
