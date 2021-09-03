#include<iostream>
using namespace std;
int main()
{


    int salario;
    cout<<"ingrese su salario ";
    cin>> salario; 
    
    
    float salud = salario *  0.12;
    cout <<"la empresa paga por su salud " <<salud << endl;

    float pension = salario * 0.16;
    cout <<"la empresa paga por su pension "<<pension << endl;

    float seguro = salario*0.01;
    cout <<"la empresa paga por su seguro " <<seguro << endl;

    float salarioFinal = salario - seguro;
    cout<< "salario que usted recibe " <<salarioFinal << endl;




    return 0;
}