#include <iostream>

using namespace std;

int main()
{
    int contador= 0;
    int i = 0;
    int numero= 0;
    int a,b,c,d;
    cout<<"ingrese un número de 4 digitos: ";
    cin>>numero;
    int digitos[4];
    
    digitos[0]= numero%10000/1000;
    digitos[1]=numero%1000/100;
    digitos[2]=numero%100/10;
    digitos[3]=numero%10/1;
    
    while(i<=3){
    
    if(digitos[i]==1){
        contador++;
    }
    
    i++;
    }
    
        
     cout<<contador;
     
        
        
    

}