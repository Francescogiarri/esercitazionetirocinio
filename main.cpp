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
    esercitazioneletturascrittura();
    return 0;

}
