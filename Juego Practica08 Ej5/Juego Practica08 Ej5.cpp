// Juego Practica08 Ej5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>

using namespace std;

int main()
{
    int vidahero = 100;
    int vidamaleante = 100;
    int arma = 0;
    cout << "Bienvenido Heroe tienes un enemigo muy fuerte ten cuidado!!" << endl;

    while (vidamaleante > 0 && vidahero > 0) {
        cout<<"Con que arma deseas atacar?"<< endl;
        cout<<"[1] Espada"<< endl;
        cout<<"[2] Arco"<< endl;
        cout << "[3] Lanza" <<  endl;
        cout<<"[4] Puño" << endl;
        cin >> arma;

        switch (arma) {
        case 1:
            int espada = rand()%11;
            cout << espada << endl;
            if (espada < 5) {
                cout << "Has realizado un ataque con la espada de: 30 de daño. " << endl;
                vidamaleante = vidamaleante - 30;

            }
            else if (espada > 5 && espada < 9) {
                cout << "Has realizado un ataque con la espada de: 40 de daño. " << endl;
                vidamaleante = vidamaleante - 40;

            }
            else {
                cout << "Has realizado un ataque con la espada de: 80 de daño. " << endl;
                vidamaleante = vidamaleante - 80;

            }
            break;
        case 2:
            int arco = rand () % 11;
            cout << arco << endl;
            if (arco < 5) {
                cout << "Has realizado un ataque con el arco de: 30 de daño. " << endl;
                vidamaleante = vidamaleante - 20;

            }
            else if (arco > 5 && arco < 9) {
                cout<<"Has realizado un ataque con el arco de: 30 de daño. " << endl;
                vidamaleante = vidamaleante - 30;

            }
            else {
                cout << "Has realizado un ataque con el arco de: 50 de daño. " << endl;
                vidamaleante = vidamaleante - 50;

            }

            break;

        case 3:
            int lanza = rand()%11;
            cout << lanza << endl;
            if (lanza < 5) {
                cout << "Has realizado un ataque con la lanza de: 20 de daño. " << endl;
                vidamaleante = vidamaleante - 20;

            }
            else if (lanza > 5 && lanza < 9) {
                cout << "Has realizado un ataque con la lanza de: 30 de daño. " << endl;
                vidamaleante = vidamaleante - 30;

            }
            else {
                cout << "Has realizado un ataque con la lanza de: 50 de daño. " << endl;
                vidamaleante = vidamaleante - 50;

            }
            break;
        case 4:
            int hand = rand()%11;
            cout <<(hand)<<endl;
            if (hand < 5) {
                cout << "Has realizado un ataque con la mano de: 10 de daño. " << endl;
                vidamaleante = vidamaleante - 10;

            }
            else if (hand > 5 && hand < 9) {
                cout << "Has realizado un ataque con la mano de: 15 de daño. " << endl;
                vidamaleante = vidamaleante - 15;

            }
            else {
                cout << "Has realizado un ataque con la mano de: 20 de daño. " << endl;
                vidamaleante = vidamaleante - 20;

            }

            break;
        default:
            break;
        }

        if (vidamaleante <= 0) {
            vidamaleante = 0;
        }
        cout << "La vida restante del malo es: " << vidamaleante <<endl;
        cout << " " << endl;
        if (vidamaleante <= 0) {
            cout << "Has ganado!!!" << endl;
            vidamaleante = 0;

        }
        else {

            cout << "------------------------------------------------------------------------------------------------------------";
            //Lado del maleante
            cout << "Cuidado que ataca el enemigo!!!!"<<endl;

            int dado = rand() %4;
            cout << dado << endl;
            switch (dado) {
            case 0:
                int espada = rand() % 11;
                cout << espada << endl;
                if (espada < 5) {
                    cout << "Te ha realizado un ataque con la espada de: 30 de daño. " << endl;
                    vidahero = vidahero - 30;

                }
                else if (espada > 5 && espada < 9) {
                    cout << "Te ha realizado un ataque con la espada de: 40 de daño. " << endl;
                    vidahero = vidahero - 40;

                }
                else {
                    cout << "Te ha realizado un ataque con la espada de: 80 de daño. " << endl;
                    vidahero = vidahero - 80;

                }
                break;
            case 1:
                int arco = rand()%11;
                cout << arco << endl;
                if (arco < 5) {
                    cout << "Te ha realizado un ataque con el arco de: 20 de daño. " << endl;
                    vidahero = vidahero - 20;

                }
                else if (arco > 5 && arco < 9) {
                    cout << "Te ha realizado un ataque con el arco de: 30 de daño. " << endl;
                    vidahero = vidahero - 30;

                }
                else {
                    cout << "Te ha realizado un ataque con el arco de: 50 de daño. " << endl;
                    vidahero = vidahero - 50;

                }

                break;

            case 2:
                int lanza = rand() %11;
                cout << lanza << endl;
                if (lanza < 5) {
                    cout << "Te ha realizado un ataque con la lanza de: 20 de daño. " << endl;
                    vidahero = vidahero - 20;

                }
                else if (lanza > 5 && lanza < 9) {
                    cout << "Te ha realizado un ataque con la lanza de: 30 de daño. " << endl;
                    vidahero = vidahero - 30;

                }
                else {
                    cout << "Te ha realizado un ataque con la lanza de: 50 de daño. " << endl;
                    vidahero = vidahero - 50;

                }
                break;
            case 3:
                int hand = rand()%11;
                cout << hand << endl;
                if (hand < 5) {
                    cout << "Te ha realizado un ataque con la lanza de: 20 de daño. " << endl;
                    vidahero = vidahero - 10;

                }
                else if (hand > 5 && hand < 9) {
                    cout << "Te ha realizado un ataque con la lanza de: 30 de daño. " << endl;
                    vidahero = vidahero - 15;

                }
                else {
                    cout << "Te ha realizado un ataque con la lanza de: 50 de daño. " << endl;
                    vidahero = vidahero - 20;

                }

                break;
            default:
                break;
            }
            if (vidahero <= 0) {
                cout << "Te ha ganado el enemigo :( " << endl;
                vidahero = 0;
            }
            cout << "Te queda un total de " << vidahero << " de vida" << endl;
            cout << " " << endl; 
            cout << "------------------------------------------------------------------------------------------------------------" << endl;
        }
        }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Exploraor de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
