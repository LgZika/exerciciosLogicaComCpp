#include <iostream>
/*
Faça um programa que verifique se um número inteiro fornecido pelo usuário é um número palíndromo. Imprima 1 se for palíndromo e 0 caso contrário.
*/    
using namespace std;

int main(){
    int numero, original, resto, reverso = 0;

    cout << "Entre com um numero: ";
    cin >> numero;

    original = numero;

    while (numero!= 0){
        resto = numero % 10;
        cout << "resto: " << resto << endl;

        reverso = reverso * 10 + resto;
       cout << "reverso: " << reverso << endl;

        numero /= 10;
       cout << "numero: " << numero << "\n" << endl;
    }
    cout << "Eh palindromo?: " << (reverso == original) << endl;

    return false;
}