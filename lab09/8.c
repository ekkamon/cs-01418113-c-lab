#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock);
int getNumStockType(FILE *file);
int getStockId(Product stock[], int nStock, char* targetName);
void reportStock(char *fileName);


int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

int getStockId(Product stock[], int nStock, char *targetName)
{
    for(int i = 0; i < nStock; i++)
        if (strcmp(stock[i].name, targetName) == 0)
            return i;
    return -1;
}

int getNumStockType(FILE *file)
{
    int num = -1;
    char buff[1024];
    
    if (fgets(buff, sizeof(buff), file) != NULL)
        sscanf(buff, "%d", &num);

    return num;
}

void reportStock(char *fileName)
{
    FILE *file;

    if ((file = fopen(fileName, "r")) == NULL)
        return printStock(NULL, 0);

    int newIdx = 0;
    int nStock = getNumStockType(file);
    Product stock[nStock];

    char buff[1024];
    while(fgets(buff, sizeof(buff), file) != NULL)
    {
        char date[9], time[9], name[31];
        int amount;
        double price;
        sscanf(buff, "%8s,%8s, %[^,], %d, %lf", date, time, name, &amount, &price);

        int stockId = getStockId(stock, nStock, name);
        if (stockId == -1)
        {
            strcpy(stock[newIdx].name, name);
            stock[newIdx].amount = amount;
            stock[newIdx].totalCost = price;
            newIdx++;
        }
        else
        {
            stock[stockId].amount += amount;
            stock[stockId].totalCost += price;
        }        
    }

    fclose(file);
    printStock(stock, nStock);
}