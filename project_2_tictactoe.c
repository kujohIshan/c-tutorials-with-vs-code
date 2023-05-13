#include <stdio.h> 
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
char board[3][3];
const char PLAYER ='X';
const char COMP ='O';
void printwinner(char winner);
void initialize_board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        board[i][j]=' ';
        }
        
    }
    
}
void printboard()
{
printf("%c  | %c  | %c  |",board[0][0],board[0][1],board[0][2]);
printf("\n---|----|----|\n");
printf("%c  | %c  | %c  |",board[1][0],board[1][1],board[1][2]);
printf("\n---|----|----|\n");
printf("%c  | %c  | %c  |",board[2][0],board[2][1],board[2][2]);
printf("\n");
}
int checkspace()
{
    int freespace= 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        if (board[i][j]!=' ')
        {
            freespace--;
        }
        
        }
        
    }
    return freespace;
}
void playermove()
{
    int x ,y;
    do
    {
    printf("Enter the row(1-3) and column(1-3)\n");
    scanf("%d%d",&x,&y);
    x--;
    y--;
    if (board[x][y]!=' ')
    {
        printf("invalid move\n");
    }
    else
    {
        board[x][y] = PLAYER;
        break;
    }

}while(board[x][y]!=' ');
}
void computermove()
{
// create a seed based current time
srand(time(0));
int x,y;
if (checkspace()>0)
{
    do
    {
x= rand()%3;
y= rand()%3;
    } while (board[x][y]!=' ');
    board[x][y]= COMP;
}
else
{
    printwinner(' ');
}

}
char checkwinner()
{//check rows
for (int i = 0; i < 3; i++)
{
    if (board[i][0] ==board[i][1] && board[i][0]== board[i][2])
    {
        return board[i][0];
    }
    
}
// check column
for (int j = 0; j < 3; j++)
{
    if (board[0][j] ==board[1][j] && board[0][j]== board[2][j])
    {
        return board[0][j];
    }
    
}
// check diagonals
 if (board[0][0] ==board[1][1] && board[0][0]== board[2][2])
    {
        return board[0][0];
    }
     if (board[0][2] ==board[1][1] && board[0][2]== board[2][0])
    {
        return board[0][2];
    }
    return ' ';

    }
    void printwinner(char winner)
    {
if (winner== PLAYER)
{
    printf("YOU WIN!\n");
}
else if (winner == COMP)
{
    printf("YOU LOOSE! \n");
}
else
{
    printf(" DRAW \n");
}
    }
// main function
int main()
{
char winner = ' ';
char response=' ';
do
{
winner=' ';
response= ' ';

initialize_board();
while (winner =' '&& checkspace()!=0)
{
    printboard();
    playermove();
    winner= checkwinner();
    if (winner !=' '|| checkspace()==0)
    {
        break; 
    }
     computermove();
    winner= checkwinner();
    if (winner !=' '|| checkspace()==0)
    {
        break; 
    }
}
printboard();
printwinner(winner );
printf("\n Would you want to play again(Y/N)? \n");

gets(response);
} while(response=='Y');
printf("thanks for playing ");
return 0; }