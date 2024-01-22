#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x, int y);
int main()
{
    int x, y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);

    bishopMoves(x, y);
}

void bishopMoves(int x, int y)
{
    int tempX = x, tempY = y;
    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    // logic
    board[y][x] = 'B';

    // left-top
    while(1)
    {
        if (x == 0 || y == 0) break;
        x--;y--;
        board[y][x] = 'X';
    }

    // left-bottom
    x = tempX, y = tempY;
    while(1)
    {
        if (x >= BOARD_SIZE - 1 || y >= BOARD_SIZE - 1) break;
        x++;y++;
        board[y][x] = 'X';
    }

    // right-top
    x = tempX, y = tempY;
    while(1)
    {
        if (x >= BOARD_SIZE - 1 || y <= 0) break;
        x++;y--;
        board[y][x] = 'X';
    }

    // right-bottom
    x = tempX, y = tempY;
    while(1)
    {
        if (x <= 0 || y >= BOARD_SIZE - 1) break;
        x--;y++;
        board[y][x] = 'X';
    }
    
    // draw board
    printf("  ");
    for(int i = 0; i < 8; ++i) printf("%d ", i);
    for(int i = 0; i < BOARD_SIZE; ++i)
    {
        printf("\n------------------\n");
        printf("%d", i);
        for(int j = 0; j < BOARD_SIZE; ++j)
        {
            int ascii = board[i][j];
            printf("|%c", ascii == 0 ? 32 : ascii);
        }
        printf("|");
    }
    printf("\n------------------");
}