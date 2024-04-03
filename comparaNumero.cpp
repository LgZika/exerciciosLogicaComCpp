#include <iostream>
  
using namespace std;

int main(){
    int a, b;

    cout << "Entre com um numero para a: ";
    cin >> a;
    cout << "Entre com um numero para b: ";
    cin >> b;
    cout << endl;
    if(a>b){
        cout << "O numero a eh maior que b." << endl;  
    }else if(a<b){
        cout << "O numero b eh maior que a." << endl;  
    }else{
        cout << "Os numeros a e b sao iguais" << endl;
    }
    return false;
}