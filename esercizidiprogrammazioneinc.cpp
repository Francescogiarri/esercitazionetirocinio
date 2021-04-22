#include <stdio.h>
#include <math.h>
#include "funzioniesercitazioni.h"
double averageTemperature(double maxT,double minT)
{
    return (maxT+minT)*0.5;

}



/*   stdio.h operazioni base per gestire input e output
     math.h operaziani matematiche di base
     main è la funzione da cui parte tutto il programma
     printf = stampa su console
     double =numero intero
     float numeri decimali
     scanf serve per prendere un numero da console
     i++ incrmeenta il valore di i
     t +=a equvale a dire t= t+a
 */
    /*prova*/



void esercitazioneletturascrittura()
{
    int a, i, t;
     float r;
     t = 0;
     i = 0;
     printf ("inserisci un numero:");
     scanf("%d",&a);
     while(a >= 0)
     {
         i++;
         t += a;
         r = 1.*t/i;
         printf ("La media attuale e': %.3f\n", r);
         printf ("Inserisci un numero: ");
         scanf("%d",&a);

     }
     printf("La media finale è: %.3f\n", r);
}
