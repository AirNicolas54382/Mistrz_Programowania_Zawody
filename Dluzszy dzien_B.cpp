#include <string>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string miesiace[12];
    miesiace[0] = "styczen";
    miesiace[1] = "luty";
    miesiace[2] = "marzec";
    miesiace[3] = "kwiecien";
    miesiace[4] = "maj";
    miesiace[5] = "czerwiec";
    miesiace[6] = "lipiec";
    miesiace[7] = "sierpien";
    miesiace[8] = "wrzesien";
    miesiace[9] = "pazdziernik";
    miesiace[10] = "listopad";
    miesiace[11] = "grudzien";
    int nd, miesiac, dzien;
    int zezwolenie = 1;
    string m, m_zapis;
    cin >> nd >> m;
    m_zapis=m;
    for(int i = 0;i<12;i++){
        if(m==miesiace[i]){
            miesiac=i;
            break;
        }
    }
    switch(miesiac){
    case 0:
    case 2:
    case 4:
        dzien = 31;
        break;
    case 1:
        dzien = 29;
        break;
    case 3:
        dzien = 30;
        break;
    case 9:
        nd = nd - 31;
    case 10:
        zezwolenie = 0;
        nd = nd - 30;
    case 11:
        zezwolenie =0;
        nd = 21 - nd;
        nd = 22 + nd;
        if ((nd > 31 && nd <=62) || (nd <= 0 && nd >= -20)){
                miesiac = -1;
            cout << nd-31 << " " << miesiace[miesiac+1];
        }else if(nd > 62 && nd <= 91){
            miesiac = -1;
            cout << nd-62 << " " << miesiace[miesiac+2];
        }else if(nd > 91){
            miesiac = -1;
            cout << nd-91 << " " << miesiace[miesiac+3];
        }
        else{
        cout << nd << " " << m;
        }
    }
    if(zezwolenie == 1){
        if(nd==dzien){
            cout << 1 << " " << miesiace[miesiac+1];
        }else{
            cout << nd+1<< " " <<m;
        }
    }

}


