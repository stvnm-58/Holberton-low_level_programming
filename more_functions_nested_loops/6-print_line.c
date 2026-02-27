#include "main.h"
/**
* print_line - Dessine une ligne droite dans le terminal.
* @n: Le nombre de fois que le caractère '_' doit être imprimé.
*
* Description: Si n est 0 ou moins, la fonction imprime seulement
* un retour à la ligne.
*/
void print_line(int n)
{

int i;

for (i = 0; i < n; i++)
{
	_putchar('_');
}
_putchar('\n');
}
