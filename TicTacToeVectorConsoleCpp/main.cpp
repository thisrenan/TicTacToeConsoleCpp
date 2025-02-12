#include <iostream>
using namespace std;

void mostrarQuadro();
void turnoJogador();
bool gameover();
char turno;
bool empate = false;
char p1='1', p2='2', p3='3', p4='4', p5='5', p6='6', p7='7', p8='8', p9='9';

int main()
{
    cout << "Jogo da velha\n";
    cout << "Jogador 1 [X] --- Jogador 2 [O]\n";
    turno = 'X';

    while (!gameover())
    {
        mostrarQuadro();
        turnoJogador();
        gameover();
    }

    if (turno == 'O' && !empate)
    {
        mostrarQuadro();
        cout << endl << endl << "Jogador 1 [X] Venceu! Game Over!\n";
    }
    else if (turno == 'X' && !empate)
    {
        mostrarQuadro();
        cout << endl << endl << "Jogador 2 [O] Venceu! Game Over!\n";
    }
    else
    {
        mostrarQuadro();
        cout << endl << endl << "Empate! Game Over!\n";
    }
    return EXIT_SUCCESS;
}

void mostrarQuadro()
{
    system("clear");
    cout << "Jogo da velha\n";
    cout << "Jogador 1 [X] --- Jogador 2 [O]\n";
    cout << "---------------------" << endl << endl;
    cout << "     |     |    " << endl;
    cout << "  " << p1 << "  |  " << p2 << "  |  " << p3 << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |    " << endl;
    cout << "  " << p4 << "  |  " << p5 << "  |  " << p6 << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |    " << endl;
    cout << "  " << p7 << "  |  " << p8 << "  |  " << p9 << endl;
    cout << "     |     |    " << endl;
 }

void turnoJogador()
{
    int choice;

    if (turno == 'X')
    {
        cout << "turno do jogador 1 [X]: ";
    }
    else
    {
        cout << "turno do jogador 2 [O]: ";
    }

    cin >> choice;

    switch (choice)
    {
        case 1:
            if (p1 == 'X' || p1 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p1 != 'X' && p1 != 'O')
            {
                p1 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }

        break;
        case 2:
            if (p2 == 'X' || p2 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p2 != 'X' && p2 != 'O')
            {
                p2 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }

        break;
        case 3:
            if (p3 == 'X' || p3 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p3 != 'X' && p3 != 'O')
            {
                p3 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        case 4:
            if (p4 == 'X' || p4 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p4 != 'X' && p4 != 'O')
            {
                p4 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        case 5:
            if (p5 == 'X' || p5 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p5 != 'X' && p5 != 'O')
            {
                p5 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        case 6:
            if (p6 == 'X' || p6 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p6 != 'X' && p6 != 'O')
            {
                p6 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        case 7:
            if (p7 == 'X' || p7 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p7 != 'X' && p7 != 'O')
            {
                p7 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        case 8:
            if (p8 == 'X' || p8 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p8 != 'X' && p8 != 'O')
            {
                p8 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        case 9:
            if (p9 == 'X' || p9 == 'O')
            {
                cout<<"O número escolhido já está sendo utilizado, tente novamente.";
                turnoJogador();
            }
            else if (p9 != 'X' && p9 != 'O')
            {
                p9 = turno;

                if (turno == 'X')
                {
                    turno = 'O';
                }
                else
                {
                    turno = 'X';
                }
            }
        break;
        default:
            cout << "Numero incorreto, tente novamente\n";
            turnoJogador();
    }
}

bool gameover()
{
    if (p1 == p4 && p4 == p7)
    {
        return true;
    }
    else if (p2 == p5 && p5 == p8)
    {
        return true;
    }
    else if (p3 == p6 && p6 == p9)
    {
        return true;
    }
    else if (p1 == p2 && p2 == p3)
    {
        return true;
    }
    else if (p4 == p5 && p5 == p6)
    {
        return true;
    }
    else if (p7 == p8 && p8 == p9)
    {
        return true;
    }
    else if (p1 == p5 && p5 == p9)
    {
        return true;
    }
    else if (p3 == p5 && p5 == p7)
    {
        return true;
    }

    if (p1 != 'X' && p1 != 'O' ||
        p2 != 'X' && p2 != 'O' ||
        p3 != 'X' && p3 != 'O' ||
        p4 != 'X' && p4 != 'O' ||
        p5 != 'X' && p5 != 'O' ||
        p6 != 'X' && p6 != 'O' ||
        p7 != 'X' && p7 != 'O' ||
        p8 != 'X' && p8 != 'O' ||
        p9 != 'X' && p9 != 'O')
    {
        return false;
    }

    empate = true;
    return true;
 }


