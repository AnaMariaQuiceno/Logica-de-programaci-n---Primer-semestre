#include <iostream>
using namespace std;
int main(){
int alojamiento;
int alimentacion;
int matricula;

cout<<"Digite el valor del alojamiento:";
cin>>alojamiento;
cout <<"\n";
cout<<"El valor del alojamiento es"<<alojamiento;
cout <<"\n";
cout<<"Digite el valor de la alimentacion:";
cin>>alimentacion;
cout <<"\n";
cout<<"El valor de la alimentacion es "<<alimentacion;
cout <<"\n";
cout<<"Digite el valor de la matricula:";
cin>>matricula;
cout <<"\n";
cout<<"El valor de la matricula es"<<matricula;

if(matricula>alojamiento){
   if(matricula>alimentacion){
       cout<<"matricula es el monto mayor";
       
       
   }else{
       if(alojamiento>matricula){
           if(alojamiento>alimentacion){
               cout<<"alojamiento es el monto mayor";
               
           }
       }
   } 
   }else{
       cout<<"alimentacion es el monto mayor";
  }
}