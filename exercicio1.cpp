#include <iostream>
/*
Faça um programa que receba dois números inteiros do usuário e imprima a soma desses números.
*/    
using namespace std;

int main(){
    int x, y;
    
    cout << "Entre com o primeiro numero: ";
    cin >> x;
    cout << "Entre com o segundo numero: ";
    cin >> y;
    cout << "Soma dos numeros eh: " << (x + y) << endl;

    return false;
}