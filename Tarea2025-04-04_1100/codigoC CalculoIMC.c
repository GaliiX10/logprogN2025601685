#include <stdio.h>
int main()
{
    float peso;
    float estatura;
    float IMC;

    printf("ingrese su estatura en m");
    scanf("%f" ,&estatura);
     printf("ingrese su peso en kg");
     scanf("%f" ,&peso);
     IMC = peso/(estatura*estatura);
     printf("su IMC es:%.2f\n",IMC);

     if(IMC<=18.4){
        printf("tiene bajo peso\n");
     }
     else if(IMC>=18.5 && IMC<=24.9){
        printf("su peso es Normal\n");
     }
     else if(IMC>=25.0&&IMC<=29.9){
        printf("tiene sobrepeso\n");
     }
     else if(IMC>=30.0&&IMC<=34.9){
        printf("tiene obesidad clase 1\n");
     }
     else if(IMC>=35.0&&IMC<=39.9){
        printf("tiene obecidad clase 2\n");
     }
     else if(IMC>=40.0){
        printf("tiene obesidad clase 3\n");
     }
     return 0;
}
