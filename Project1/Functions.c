#include "Functions.h"
#include <stdlib.h>

char * CreateBoradArray(int col, int row)
{
	int i, j;
	char ** head = malloc(row * sizeof(char));
	char ** curr = head;

	for (i = 0; i < row; i++) {
		*curr = malloc( col * sizeof(char));
		curr++;
	}

	for (i = 0; i < row; i++)
		for (j = 0; j < row; j++)
			head[i][j] = NULL;
	
	return head;
}

void Add(char** Board, int col , int row ,char turn) {

	while (Board[--row][col] != NULL && row >= 0);
	Board[row][col] = turn;
}

int GetInput() {
	char input = NULL;

	while (input != '\n')
	{
		input = getch();
	}
}