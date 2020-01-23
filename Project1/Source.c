#include<stdio.h>
#include "Functions.h"

int main()
{
	char **Board = NULL;

	int col = 8, row = 6;
	Board = CreateBoradArray(col, row);

	Add(Board, 0, row, FIRST);
	Add(Board, 0, row, FIRST);
	GetInput();

	return 0;
}

