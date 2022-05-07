#include <iostream>
using namespace std;

double factorial(int numero);

int main(){
    int numero;
    cout << "Introduzca numero: ";
    cin >> numero;
    cout << "factorial: " << factorial(numero) << endl;

    return 0;
}

double factorial(int numero){
    if (numero == 1){
        return 1;
    }else{
        return numero*factorial(numero-1);
    }
}