#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{    
    int num;
    scanf("%d", &num);

    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    for(int i = 0; i < num; ++i)
    {
        int x, y;
        char piece[2];

        scanf("%1s(%1d, %1d)", piece, &x, &y);
        setPieceOnTable(board, piece[0], x, y);
    }

    void draw_table(int board[][BOARD_SIZE]);

    printf("------------------\n");
    printf("  ");
    for(int i = 0; i < 8; ++i) printf("%d ", i);
    printf("\n");

    for(int i = 0; i < BOARD_SIZE; ++i)
    {
        printf("%d", i);
        for(int j = 0; j < BOARD_SIZE; ++j)
        {
            int ascii = board[i][j];


            printf("|%c", ascii == 0 ? 32 : ascii);
        }

        printf("|\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)
{
    board[yPos][xPos] = piece;
}