#include <stdio.h>
#include <math.h>
#include "funzioniesercitazioni.h"
int main()
{
    printf("hello world!\n");
    int a,b;
    double var;
    a=1;
    b=5;
    var=a+b;
    printf("a=%d,b=%d,var=%.0f\n",a,b,var);
    var=b-a;
    printf("a=%d,b=%d,var=%.0f\n",a,b,var);
    double maxT,minT,meanT;
    maxT=30;
    minT=-5;
    meanT=averageTemperature(maxT,minT);
    printf  ("maxT=%f,minT%f,meanT=%f\n",maxT,minT,meanT);

    return 0;

}
double averageTemperature(double maxT,double minT)
{
    return (maxT+minT)*0.5;

}

/*   stdio.h operazioni base per gestire input e output
     math.h operaziani matematiche di base
     main è la funzione da cui parte tutto il programma
     printf = stampa su console
     double =numero intero
 */
    /*prova*/
