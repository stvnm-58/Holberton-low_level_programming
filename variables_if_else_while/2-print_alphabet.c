#include <stdio.h>

/* 
* Déroule l'alphabet
* boucle s'arrête à z
*/


int main(void)
{
char l = 'a';

while (l <= 'z')
{
putchar(l);
l++;
}
putchar('\n');

return (0);

}
