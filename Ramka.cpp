#include <string>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    cin >> a;
    int b = a.length();
    for(int i = 0; i<b; i++){
        cout<<"+-";
    }
    cout<<"+"<<endl;
     for(int i = 0; i<b; i++){
        cout<<"|"<<a[i];
    }
    cout<<"|"<<endl;
    for(int i = 0; i<b; i++){
        cout<<"+-";
    }
    cout<<"+";
}


