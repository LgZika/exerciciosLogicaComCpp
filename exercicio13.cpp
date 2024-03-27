#include <iostream>
/*
Escreva um programa que leia um número inteiro representando a quantidade de horas e converta esse valor para segundos.
*/    
using namespace std;

int main(){
    float horas, segundos;

    cout << "Converte horas em segundos\n";
    cout << "Entre com uma hora: ";
    cin >> horas;
    
    segundos = horas * 3600;
    cout << "A hora inserida equivale a: " << segundos << endl;

    return false;
}