
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a1, a2, b1, b2 = 0;
    while (true){
        cin >> a1 >> a2 >> b1 >> b2;
        if(a1 < a2 || b1 < b2){
            break;
        }
    }

    if(b1 > a1){
        if(a2 > b2){
        long long test3 =  b2 - b1;
        cout << test3;
        }else{
        long long test1 = b1 - a2;
        if(test1 <= 0){
            cout << abs(test1);
        }else{
            cout << "NIE";
        }
        }
    }else if(b1 <= a1){
        if(a2 < b2){
            long long test4 = a2 - a1;
            cout << test4;
        }else{
            long long test2 = b2 - a1;
            if(test2 >= 0){
                cout << abs(test2);
            }else{
                cout << "NIE";
            }
        }
    }
    }

