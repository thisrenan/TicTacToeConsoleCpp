#include <iostream>
using namespace std;

void ShowBoard();
void PlayerTurn();
bool gameover();
char turn;
bool draw = false;
char p1='1', p2='2', p3='3', p4='4', p5='5', p6='6', p7='7', p8='8', p9='9';

int main()
{
    cout << "Tic Tac Toe\n";
    cout << "Player 1 [X] --- Player 2 [O]\n";
    turn = 'X';

    while (!gameover())
    {
        ShowBoard();
        PlayerTurn();
        gameover();
    }

    if (turn == 'O' && !draw)
    {
        ShowBoard();
        cout << endl << endl << "Player 1 [X] Wins! Game Over!\n";
    }
    else if (turn == 'X' && !draw)
    {
        ShowBoard();
        cout << endl << endl << "Player 2 [O] Wins! Game Over!\n";
    }
    else
    {
        ShowBoard();
        cout << endl << endl << "Draw! Game Over!\n";
    }
    return EXIT_SUCCESS;
}

void ShowBoard()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    cout << "Tic Tac Toe\n";
    cout << "Player 1 [X] --- Player 2 [O]\n";
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

void PlayerTurn()
{
    int choice;

    if (turn == 'X')
    {
        cout << "Player 1 turn [X]: ";
    }
    else
    {
        cout << "Player 2 turn  [O]: ";
    }

    cin >> choice;

    switch (choice)
    {
        case 1:
            if (p1 == 'X' || p1 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p1 != 'X' && p1 != 'O')
            {
                p1 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }

        break;
        case 2:
            if (p2 == 'X' || p2 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p2 != 'X' && p2 != 'O')
            {
                p2 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }

        break;
        case 3:
            if (p3 == 'X' || p3 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p3 != 'X' && p3 != 'O')
            {
                p3 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        case 4:
            if (p4 == 'X' || p4 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p4 != 'X' && p4 != 'O')
            {
                p4 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        case 5:
            if (p5 == 'X' || p5 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p5 != 'X' && p5 != 'O')
            {
                p5 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        case 6:
            if (p6 == 'X' || p6 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p6 != 'X' && p6 != 'O')
            {
                p6 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        case 7:
            if (p7 == 'X' || p7 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p7 != 'X' && p7 != 'O')
            {
                p7 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        case 8:
            if (p8 == 'X' || p8 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p8 != 'X' && p8 != 'O')
            {
                p8 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        case 9:
            if (p9 == 'X' || p9 == 'O')
            {
                cout<<"The number you chose is already in use, please try again.";
                PlayerTurn();
            }
            else if (p9 != 'X' && p9 != 'O')
            {
                p9 = turn;

                if (turn == 'X')
                {
                    turn = 'O';
                }
                else
                {
                    turn = 'X';
                }
            }
        break;
        default:
            cout << "Incorrect number, try again\n";
            PlayerTurn();
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

    draw = true;
    return true;
 }


