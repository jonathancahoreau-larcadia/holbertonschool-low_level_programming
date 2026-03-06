#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - réalise une échiquier
 * @a: un tableau qui représente la ligne
 *
 *
 */

void print_chessboard(char (*a)[8])
{
	int ligne, colonne;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colonne = 0; colonne < 8; colonne++)
		{
			_putchar(a[ligne][colonne]);
		}
		_putchar('\n');
	}
}
