#include<iostream>
using namespace std;
int main (){
    double valorC
int valor;
cout<<"ingrese el valor de la compra"; cin>>valorC;
cin>> valorC;

double descuento, vPagar, porcentaje;

//cuando es 20000 o menos 
if(valorC <= 20000){
    descuento = 0
    vPagar = valorC
}

//cuando es mas de 20000 y 50000 o menos
if(valorC > 20000 &&< valorC <=50000){
descuento = valorC * 5.0 / 100;
vPagar = valorC - descuento;
}


//cuando es mas de 50000 y 2000000 o menos 
if (valorC > 50000 && valorC<=200000){
descuento = valorC * 10.0 /100;
vPagar = valorC - descuento;
}

//cuando es mas de 200000
if(valorC>200000){
descuento = valorC * 20.0 / 100
vPagar = valorC - descuento;
}



///////
//mostrar el descuento
cout<<"descuento";
cout<< descuento;
cout<< endl;
//cout"\n";
cout<<" total a pagar:"<< vPagar;




}
