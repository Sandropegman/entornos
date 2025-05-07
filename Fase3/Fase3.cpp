#include <iostream>
#include <iostream>
using namespace std;

void message(int& arma) {
    cout << "Tienes un enemigo muy fuerte ten cuidado!!" << endl;
    cout << "Con que arma deseas atacar?" << endl;
    cout << "[1] Espada" << endl;
    cout << "[2] Arco" << endl;
    cout << "[3] Lanza" << endl;
    cout << "[4] Hand" << endl;
    cin >> arma;
    
}
void heroattack(int arma , int damage, int resultado, int& vidamaleante) {


    switch (arma) {
    case 1:
        resultado = rand() % 11;
        if (resultado < 5) {
            damage = 30;
            vidamaleante = vidamaleante - 30;

        }
        else if (resultado > 5 && resultado < 9) {
            damage = 40;
            vidamaleante = vidamaleante - 40;

        }
        else {
            damage = 60;
            vidamaleante = vidamaleante - 60;

        }
        break;
    case 2:
        resultado = rand() % 11;
        if (resultado < 5) {
            damage = 20;
            vidamaleante = vidamaleante - 20;

        }
        else if (resultado > 5 && resultado < 9) {
            damage = 30;
            vidamaleante = vidamaleante - 30;

        }
        else {
            damage = 50;
            vidamaleante = vidamaleante - 50;

        }

        break;

    case 3:
        resultado = rand() % 11;
        if (resultado < 5) {
            damage = 20;
            vidamaleante = vidamaleante - 20;

        }
        else if (resultado > 5 && resultado < 9) {
            damage = 30;
            vidamaleante = vidamaleante - 30;

        }
        else {
            damage = 50;
            vidamaleante = vidamaleante - 50;

        }
        break;
    case 4:
        resultado = rand() % 11;
        if (resultado < 5) {
            damage = 10;
            vidamaleante = vidamaleante - 10;

        }
        else if (resultado > 5 && resultado < 9) {
            damage = 15;
            vidamaleante = vidamaleante - 15;

        }
        else {
            damage = 20;
            vidamaleante = vidamaleante - 20;

        }

        break;
    default:
        break;
    }

    if (vidamaleante <= 0) {
        vidamaleante = 0;
    }
    cout << "Has realizado un ataque de " << damage << " de damage" << endl; //pongo damage en vez de daño por la ñ
    cout << " " << endl;
    cout << "La vida restante del malo es: " << vidamaleante << endl;
    cout << " " << endl;
}





void ataquenemigo(int arma, int damage, int resultado, int& vidamaleante,int& vidahero , int dado) {
    if (vidamaleante > 0)
    {


        cout << "Cuidado que ataca el enemigo!!!!" << endl;

        dado = rand() % 4;
        switch (dado) {
        case 0:
            resultado = rand() % 11;
            if (resultado < 5) {
                damage = 30;
                vidahero = vidahero - 30;

            }
            else if (resultado > 5 && resultado < 9) {
                damage = 40;
                vidahero = vidahero - 40;

            }
            else {
                damage = 60;
                vidahero = vidahero - 60;

            }
            break;
        case 1:
            resultado = rand() % 11;
            if (resultado < 5) {
                damage = 20;
                vidahero = vidahero - 20;

            }
            else if (resultado > 5 && resultado < 9) {
                damage = 30;
                vidahero = vidahero - 30;

            }
            else {
                damage = 40;
                vidahero = vidahero - 40;

            }

            break;

        case 2:
            resultado = rand() % 11;
            if (resultado < 5) {
                damage = 20;
                vidahero = vidahero - 20;

            }
            else if (resultado > 5 && resultado < 9) {
                damage = 30;
                vidahero = vidahero - 30;

            }
            else {
                damage = 50;
                vidahero = vidahero - 50;

            }
            break;
        case 3:
            resultado = rand() % 11;
            if (resultado < 5) {
                damage = 10;
                vidahero = vidahero - 10;

            }
            else if (resultado > 5 && resultado < 9) {
                damage = 15;
                vidahero = vidahero - 15;

            }
            else {
                damage = 20;
                vidahero = vidahero - 20;

            }

            break;
        default:
            break;
        }
        if (vidahero <= 0) {
            vidahero = 0;
        }
        cout << "Te ha atacado con un ataque de " << damage << " de damage" << endl;
        cout << "Te queda un total de " << vidahero << " de vida" << endl;
        cout << " " << endl;

    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}
string winner(int vidamaleante, int vidahero) {
    string ganador;
    if (vidamaleante <= 0) {
        ganador = "heroe";
        vidamaleante = 0;
    }
    else if (vidahero <= 0) {
        ganador = "maleante";
        vidahero = 0;

    }
    return ("El ganador es: " + ganador + " GG");
}

int main()
{
    int vidahero = 100;
    int vidamaleante = 100;
    int arma = 0;
    int dado = 0;
    int damage = 0;
    int resultado = 0;
    while (vidamaleante > 0 && vidahero > 0) {
        message(arma);
        heroattack(arma,  damage,  resultado,  vidamaleante);
        ataquenemigo(arma, damage, resultado, vidamaleante, vidahero, dado);
    }

    string winnersalida = winner( vidamaleante,  vidahero);
    cout << winnersalida << endl;

}
