#include <stdio.h>

int main()
{
 float a, b, c, x1, x2;
 
 printf("Digite o valor A: ");
 scanf("%f", &a);
 printf("Digite o valor B: ");
 scanf("%f", &b);
 printf("Digite o valor C: ");
 scanf("%f", &c);
 

 x1 = (-b + (b*b - 4*a*c)) / (2*a);
 x2 = (-b - (b*b - 4*a*c)) / (2*a);
 
 printf("O valor de x1: %f\n", x1);
 printf("O valor de x2: %f\n", x2);
 
 return 0;
 
}