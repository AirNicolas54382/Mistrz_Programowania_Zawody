#include <string>
#include <iostream>
using namespace std;
string Sprawdzanko(string);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int nd, miesiac;
    string m;
    cin >> nd >> m;
    if(m == "styczen"){
        miesiac = 1;
    }else if(m == "luty"){ miesiac = 2;
    }else if(m == "marzec"){ miesiac = 3;
    }else if(m == "kwiecien"){ miesiac = 4;
    }else if(m == "maj"){ miesiac = 5;
    }else if(m == "czerwiec"){ miesiac = 6;
    }else if(m == "lipiec"){ miesiac = 7;
    }else if(m == "sierpien"){ miesiac = 8;
    }else if(m == "wrzesien"){ miesiac = 9;
    }else if(m == "pazdziernik"){ miesiac = 10;
    }else if(m == "listopad"){ miesiac = 11;
    }else{ miesiac = 12;
    }
    if(miesiac == 1 || miesiac==3 || miesiac==5){
        if(nd == 31){
        cout<<"1 "<<Sprawdzanko(m);
        }else{
        cout << nd+1 << " " << m;
        }
}
}

string Sprawdzanko(m){
  if(m == "styczen"){
        return "luty";
    }else if(m == "luty"){ return "marzec";
    }else if(m == "marzec"){ return "kwiecien";
    }else if(m == "kwiecien"){ return "maj";
    }else if(m == "maj"){ return "czerwiec";
    }else if(m == "czerwiec"){ return "lipiec";
    }else if(m == "lipiec"){ return "sierpien";
    }else if(m == "sierpien"){ return "wrzesien";
    }else if(m == "wrzesien"){ return "pazdziernik";
    }else if(m == "pazdziernik"){ return "listopad";
    }else if(m == "listopad"){ return "grudzien";
    }else{ return "styczen";
    }

}


