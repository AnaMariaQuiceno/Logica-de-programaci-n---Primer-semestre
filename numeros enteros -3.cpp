#include <iostream>
#include <string>
using namespace std;
int main (){
int n1, n2;
cout<< "Enter an integer";
cin>> n1;
cout <<"Enter another integer";
cin >>n2;
//int residue =n1 % n2// residue contains the modulo of the integer division
//bool esMul = residue ==0;
//string res= !esMul ? "n1 es multiplo de n2" : "n1 no es multiplo de n2";
// cout << res;
string esMul= n1 % n2==0 ?"" : " no";
cout<< n1 % n2=="n1 is divisible by n2" : "n1 is not divisible by n2";



}