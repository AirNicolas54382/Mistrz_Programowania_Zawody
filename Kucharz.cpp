
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n = 0;
    cin >> n;
    int skladniki[n];
    int zwrot[n];
    cin >> skladniki[0];
    zwrot[0] = skladniki[0];
    for(int i = 1; i<n; i++){
        cin >> skladniki[i];
        zwrot[i] = skladniki[i] - skladniki[i-1];

    };
    for(int i = 0; i<n; i++){
        cout << zwrot[i] << " ";
    }
}
