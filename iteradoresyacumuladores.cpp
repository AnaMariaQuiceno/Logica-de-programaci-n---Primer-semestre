#include <iostream>
using namespace std;

int i = 1; //iterador
int total = 0;  //iterador
int n;
cout<<"enter a natural number"
cin>> n;
while (i <= n){
    total + = i;
    i++;

    cout<<"the sum of the natural numbers from 1 to "<< n <<" is equal to the total"<<total;
}