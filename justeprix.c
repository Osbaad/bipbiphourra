#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ( int argc, char** argv ) 
{
int nombreMystere = 0, nombreEntre = 0;
const int MAX = 100000, MIN = 0;
srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
do
{
printf("Quel est le juste prix ? ");
scanf("%d", &nombreEntre);
// On compare le prix entré avec le juste prix
if (nombreMystere > nombreEntre)
printf("C'est plus !\n\n");
else if (nombreMystere < nombreEntre)
printf("C'est moins !\n\n");
else
printf ("Bravo, vous avez trouve le Juste Prix !!!\n\n");
} while (nombreEntre != nombreMystere);
}