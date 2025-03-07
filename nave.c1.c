#include <stdio.h>
#include <math.h>
int main()
{
    int L=2;
    float pt= (2*L)+(1.5*L)+(2*L)+L+(0.5*L)+(L/3.0)+(2*L/3.0)+(0.76*L)+(0.74*L)+(0.26);
    float c1= pow(L,2);
    float c2= (L*L)/2;
    float c3= (L*L)/2;
    float c4= ((3.0/2*L)*L)/2;
    float c5= (2*L)*(1.0/4*L);
    float at= c1+c2+c3+c4+c5;
    printf ("Area total: %f\n", at);
    printf ("Perimetro total: %f\n", pt);
    return 0;
}
