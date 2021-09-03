#include <iostream>
using namespace std;
int main(){
    string categoria="";
    string Dia_semana="";

    cout<<"digite la categoria";
    cin>>categoria;

    cout<<"digite el dia de la semana";
    cin>>Dia_semana;
    if(categoria=="A"){
        if(Dia_semana=="L"||Dia_semana=="M"||Dia_semana=="X"||Dia_semana=="J"||Dia_semana=="V"){
            cout<<"usted debe pagar 1400";
        
        }else{
            cout<<"usted debe pagar 1600";
        }
    }
     if(categoria=="B"){
        if(Dia_semana=="L"||Dia_semana=="M"||Dia_semana=="X"||Dia_semana=="J"||Dia_semana=="V"){
            cout<<"usted debe pagar 1600";
        
        }else{
            cout<<"usted debe pagar 1500";
        }
    }
    if(categoria=="C"){
        cout<<"usted debe pagar 1600";
    }
}