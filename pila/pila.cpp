#include <iostream>
#include <conio.h>
#include <stdio.h>
// somewhere in the program
#define WINDOWS 1

using namespace std;



std::cout;
std::ios_base::Init::Init();


void console_clear_screen();
void push();
void pop();
void recorrer();

int pila[6];
int inicio, final, tope, opcion;




void console_clear_screen() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}

void push(){
    //clrscr();
    console_clear_screen();
    if( tope == final){
        cout << "La pila se encuentra llena, ocasionaria" << endl;
    }else{
        cout << "Valor a ingresar en la pila" << endl;        
        final++;
        cin >> inicio;
        pila[final] = inicio;
        cout << "Valor agregado en la pila en la posicion:" << endl;
        cout << final;                
    }
}

void pop(){
    //clrscr();
    console_clear_screen();
    if( final == 0){
        cout << "La pila se encuentra vacia, no procede" << endl;
    }else{
        cout << "Eliminando de la pila el valor:" << endl;
        cout << pila[final];
        cout << "De la posición en la pila:" << endl;
        cout << final;
        pila[final] = 0;
        final--;
    }
}


void recorrer(){
    //clrscr();
    console_clear_screen();
    if( final == 0){
        cout << "La pila se encuentra vacia, no procede" << endl;
    }else{
        for (int r = 0; r < final; r++)
        {
            cout << "Posición en pila:" << endl;
            cout << r;
            cout << "De la posición en la pila:" << endl;
            cout << pila[r];
            cout << " \n";
        }
    }
    getch();
}


int main(){

    tope = 6;
    final = 0;
    //clrscr();
    console_clear_screen();
    do
    {
        //clrscr();
        console_clear_screen();

        //gotoxy(30,2);
        cout << "Bienvenido al programa de pila\n" << endl;
        cout << "Seleccione una opcion\n" << endl;
        cout << "1. Ingresar valor en la pila\n" << endl;
        cout << "2. Eliminar valor de la pila\n" << endl;
        cout << "3. Recorrer la pila\n" << endl;
        cout << "4. Salir\n" << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                recorrer();
                break;
            case 4:
                cout << "Gracias por utilizar el programa" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
        getch();
    } while (opcion != 4);
    
    return 0;
}
