/*
Author: Angel Oswaldo Vargas Rocha
Email: up210913@alumnos.upa.edu.mx
Description: This is a tic tac toe game, using functions, cycles and conditions.
*/

//Library to avoid "std::"
#include <iostream>
using namespace std;

//Functions to use in the main function. Their descrptions are before each function.
void board();
int selectPlay();
bool checkPlay(int, string);
void placePlay(int, string, string);
bool ganar(string);
int getpcPlay();
void cloneArray();
int bestPlay(string);

//Arrays to create the board and make the moves
char structureTTE[6][11];
char playArea[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char playAreaPC[3][3];
int playerTurn = 1;
int row, col;

//Constants to know if it is PC or human
const string PC = "Machine";
const string HUMAN = "Human";
const string BOARD = "Real";
const string IMAGINARYBOARD = "Imaginary";

int main()
{

    bool gameover = false;
    int play;
    bool ocupiedSquare = true;
    int mode;
    cout << "Welcome to tic tac toe game\n";
    cout<<"Select game mode: \n";
    cout << "1.- Player vs CPU\n";
    cout << "2.- Player vs Player\n";
    cin >> mode;
    cout<<"Player 1: 'X'      Player 2 / PC: 'O'\n";
    if (mode == 1)
    {
        //Make a series of functions if you choose the single mode vs PC
        do
        {            
            if (playerTurn % 2 == !0)
            {
                //Cycle to check if the position is occupied
                do
                {
                    board();
                    play = selectPlay();
                    ocupiedSquare = checkPlay(play, BOARD);
                    if (ocupiedSquare == true)
                    {
                        
                        cout << "Select another position\n";
                    }
                } while (ocupiedSquare == true);
                placePlay(play, BOARD, HUMAN);
                gameover = ganar(BOARD);
            }
            else
            {
                //Make a play to PC
                board();
                cout<<"PC move\n";
                play = getpcPlay();
                placePlay(play, BOARD, PC);
                gameover = ganar(BOARD);
            }
        } while (gameover == false and playerTurn < 10);
        
        board();
    }
    else if (mode == 2)
    //Make a series of functions if you choose the multiplayer mode
    {
        do
        {
            do
            {
                board();
                play = selectPlay();
                ocupiedSquare = checkPlay(play, BOARD);
                if (ocupiedSquare == true)
                {
                    
                    cout << "Select another position\n";
                }
            } while (ocupiedSquare == true);
            placePlay(play, BOARD, HUMAN);
            gameover = ganar(BOARD);
        } while (gameover == false and playerTurn < 10);  
        board();
    }

    //Condition to print the winner when the game is over
    if (gameover == true)
    {
        if (playerTurn % 2 == 0)
        {
            cout << "The winner is Player 1 \nGG  :)\n";
        }
        else
        {
            if (mode == 1)
            {
                cout << "The winner is CPU jijijija\n";
            }
            else
            {
                cout << "The winner is Player 2 \nGG   :)\n";
            }
        }
    }
    else
    {
        cout << "Draw. No winner\n";
    }
    return 0;
}

//Function to create the board
void board()
{
    row = 0;
    col = 0;
    for (int row1 = 0; row1 < 6; row1++)
    {
        for (int col1 = 0; col1 < 11; col1++)
        {
            if (col1 == 3 || col1 == 7)
            {
                structureTTE[row1][col1] = '|';
            }
            else if (row1 == 1 || row1 == 3)
            {
                structureTTE[row1][col1] = '_';
            }
            else if (row1 != 5 && (col1 == 1 || col1 == 5 || col1 == 9))
            {
                structureTTE[row1][col1] = playArea[row][col];
                col++;
                if (col == 3)
                {
                    col = 0;
                    row++;
                }
            }
            else
            {
                structureTTE[row1][col1] = ' ';
            }
        }
    }
    for (int row1 = 0; row1 < 6; row1++)
    {
        for (int col1 = 0; col1 < 11; col1++)
        {
            if (structureTTE[row1][col1] == 'O')
            {
                cout << "\033[0;31m" << structureTTE[row1][col1] << "\033[0m";
            }
            else if (structureTTE[row1][col1] == 'X')
            {
                cout<<"\033[0;32m" << structureTTE[row1][col1] << "\033[0m";
            }
            else
            {
                cout<<structureTTE[row1][col1];
            }
        }
        cout <<"\n";
    }
}

//Function to choose a position
int selectPlay()
{
    int play1;
    do
    {
        cout << "Enter position on the board: ";
        cin >> play1;
    } while (play1 > 9 && play1 < 0);
    return play1;
}

//Function to check if the position is occupied
bool checkPlay(int play, string board)
{
    bool ocupiedSquare = false;
    int row2 = 0, col2 = 0;
    for (int NumPlay = 1; NumPlay < 10; NumPlay++)
    {
        if (play == NumPlay)
        {
            row = row2;
            col = col2;
            break;
        }
        else
        {
            col2++;
            if (col2 == 3)
            {
                col2 = 0;
                row2++;
            }
        }
    }
    if (board == BOARD)
    {
        if (playArea[row][col] == 'X' || playArea[row][col] == 'O')
        {
            ocupiedSquare = true;
        }
    }
    else if (board == IMAGINARYBOARD)
    {
        if (playAreaPC[row][col] == 'X' || playAreaPC[row][col] == 'O')
        {
            ocupiedSquare = true;
        }
    }
    return ocupiedSquare;
}

//Function to put the move on the board
void placePlay(int play, string board, string Player)
{
    char PlayValue;
    if (playerTurn % 2 == 0)
    {
        PlayValue = 'O';
    }
    else
    {
        PlayValue = 'X';
    }
    int row2 = 0, col2 = 0;
    for (int NumPlay = 1; NumPlay < 10; NumPlay++)
    {
        if (play == NumPlay)
        {
            if (board == BOARD)
            {
                playArea[row2][col2] = PlayValue;
                break;
            }
            else if (board == IMAGINARYBOARD)
            {
                if (Player == HUMAN)
                {
                    PlayValue = 'X';
                }
                else if (Player == PC)
                {
                    PlayValue = 'O';
                }
                playAreaPC[row2][col2] = PlayValue;
                break;
            }
        }
        else
        {
            col2++;
            if (col2 == 3)
            {
                col2 = 0;
                row2++;
            }
        }
    }
    if (board == BOARD){
        playerTurn++;
    }
}

//Function to check if has a winner player
bool ganar(string board)
{
    bool ganar = false;
    for (int position = 0; position < 3; position++)
    {
        if (board == BOARD)
        {
            if (playArea[position][0] == playArea[position][1] && playArea[position][position] == playArea[position][2] && playArea[position][1] == playArea[position][2])
            {
                ganar = true;
                break;
            }
            if (playArea[0][position] == playArea[1][position] && playArea[0][position] == playArea[2][position] && playArea[1][position] == playArea[2][position])
            {
                ganar = true;
                break;
            }
        }
        else if (board == IMAGINARYBOARD)
        {
            if (playAreaPC[position][0] == playAreaPC[position][1] && playAreaPC[position][position] == playAreaPC[position][2] && playAreaPC[position][1] == playAreaPC[position][2])
            {
                ganar = true;
                break;
            }
            if (playAreaPC[0][position] == playAreaPC[1][position] && playAreaPC[0][position] == playAreaPC[2][position] && playAreaPC[1][position] == playAreaPC[2][position])
            {
                ganar = true;
                break;
            }
        }
    }
    if (board == BOARD)
    {
        if (playArea[0][0] == playArea[1][1] && playArea[0][0] == playArea[2][2] && playArea[1][1] == playArea[2][2]) 
        {
            ganar = true;
        }
        else if (playArea[2][0] == playArea[1][1] && playArea[2][0] == playArea[0][2] && playArea[0][2] == playArea[1][1])
        {
            ganar = true;
        }
    } 
    else if (board == IMAGINARYBOARD)
    {
        if (playAreaPC[0][0] == playAreaPC[1][1] && playAreaPC[0][0] == playAreaPC[2][2] && playAreaPC[1][1] == playAreaPC[2][2])
        {
            ganar = true;
        }
        else if (playAreaPC[2][0] == playAreaPC[1][1] && playAreaPC[2][0] == playAreaPC[0][2] && playAreaPC[0][2] == playAreaPC[1][1])
        {
            ganar = true;
        }
    }
    return ganar;
}

//Function to get a PC move
int getpcPlay()
{
    bool ocupiedSquare = true;
    int play;
    srand(time(NULL));
    play = bestPlay(PC);
    if (play != -1)
    {
        return play;
    }
    play = bestPlay(HUMAN);
    if (play != -1)
    {
        return play;
    }
    while (ocupiedSquare == true)
    {
        play= 1 + rand() % 9;
        ocupiedSquare= checkPlay(play,BOARD);
    }
    return play;
}

//Function to clone the board in the game, to check the best play for PC later
void cloneArray(){
    for (int row2 = 0; row2 < 3; row2++)
    {
        for (int col2 = 0; col2 < 3; col2++)
        {
            playAreaPC[row2][col2] = playArea[row2][col2];
        }
    }
}

//Function to check which is the best play
int bestPlay(string Player)
{
    bool ocupiedSquare = false;
    bool gameover = false;
    int play = 0;
    cloneArray();
    if (Player == PC)
    {
        do
        {
            play++;
            ocupiedSquare=checkPlay(play, IMAGINARYBOARD);
            if (ocupiedSquare == false){
                placePlay(play, IMAGINARYBOARD, PC);
                gameover = ganar(IMAGINARYBOARD);
            }
            cloneArray();
        } while (play <= 9 && gameover == false);
    } 
    else if (Player == HUMAN)
    {
        do
        {
            play++;
            ocupiedSquare=checkPlay(play, IMAGINARYBOARD);
            if (ocupiedSquare== false){
                placePlay(play, IMAGINARYBOARD, HUMAN);
                gameover = ganar(IMAGINARYBOARD);
            }
            cloneArray();
        } while (play <= 9 && gameover == false);
    }
    if (play >= 10){
        play= -1;
    }
    return play;
}