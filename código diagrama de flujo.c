#include <stdio.h>
int main ()
{
   int L = 12;
    float IVA = 0.16;
    float m2 = 9256.00;
    float area, costom2, IVA_M, totalR;
    area = (12*1/2.0*L)+((1/2.0*L*12)/2);
    costom2 = m2*area;
    IVA_M = costom2 * IVA;
    totalR= costom2 + IVA_M;

    printf("el area total del terreno es:%.2f\n", area);
    printf("el costo total del terreno es:%.2f\n", costom2);
    printf("el costo del IVA del terreno es:%.2f\n", IVA_M);
    printf("el costo total del terreno con IVA es:%.2f\n", totalR);
    return 0;
}
