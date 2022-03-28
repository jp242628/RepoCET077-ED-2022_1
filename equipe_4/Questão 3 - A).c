//A)


#include <stdio.h>
main(){
int num1, num2;
printf("\nInforme os valores de dois números: ");
scanf("%d %d", &num1, &num2);

printf("\nO Valor da multiplicação fica: %d\n", mult(num1, num2));

return 0;
}

int mult(int num1, int num2) {

if (num2== 0) return num2;
else return num1 + mult(num1, num2-1);
}