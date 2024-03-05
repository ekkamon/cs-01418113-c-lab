#include <stdio.h>

typedef int DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month)
{	
	int arr[12] = {0};
	int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(int i = 0; i < 12; i++)
		if (i == 0)
			arr[i] = 2;
		else arr[i] = (arr[i-1] + months[i-1]) % 7;
	
	int result = ((arr[month-1] + day) % 7) - 1;
	return result + (result < 0 ? 7 : 0);
}

// 2 5 5 1 3 6 1 4 0 2 5 0

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case 0: printf("Sunday.\n"); break;
		case 1: printf("Monday.\n"); break;
		case 2 : printf("Tuesday.\n"); break;
		case 3 : printf("Wednesday.\n"); break;
		case 4 : printf("Thursday.\n"); break;
		case 5 : printf("Friday.\n"); break;
		case 6 : printf("Saturday.\n"); break;
	}
}