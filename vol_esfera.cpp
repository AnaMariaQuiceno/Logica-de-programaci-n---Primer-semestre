#include <iostream>
#include<stdlib.h>
using namespace std;
int main (){
    const double PI = 3.1416;
    float radio; 
    cout<<"Digite el valor del radio: ";
    cin>> radio;
    float volumen=(4*PI*(radio)*(radio)*(radio))/3;
    cout<<'\n'<<volumen;
    system("pause");



}
