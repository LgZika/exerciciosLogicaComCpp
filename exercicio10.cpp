#include <iostream>
/*
Faça um programa que receba três notas e seus respectivos pesos do usuário, e calcule a média ponderada dessas notas.

*/    
using namespace std;

int main(){
    float nota1, nota2, nota3, peso1, peso2, peso3, mediaPond;

    cout << "Media ponderada de 3 numeros!\n";

    cout << "Entre com a primeira nota: ";
    cin >> nota1;
    cout << "Entre com o peso da primeira nota: ";
    cin >> peso1;
    cout << "Entre com a segunda nota: ";
    cin >> nota2;
    cout << "Entre com o peso da segunda nota: ";
    cin >> peso2;
    cout << "Entre com a terceira nota: ";
    cin >> nota3;
    cout << "Entre com o peso da terceira nota: ";
    cin >> peso3;

    mediaPond = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / ((peso1 + peso2 + peso3));

    cout << "A media ponderada dessas notas eh: " << mediaPond << endl;

    return false;
}