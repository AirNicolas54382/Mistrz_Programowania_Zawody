
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, n = 0;
    cin >> k >> n;

    while(n != 0){
    for(int i = 0; i < k; i++){
        cout << "$ ";
        n--;
        if(n == 0){
            break;
        }
    }
    cout << "\n";
    k = k + 2;
    }

}


