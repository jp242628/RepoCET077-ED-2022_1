//D)
#include<stdio.h>
void vetorch(int);


void vetorch(int v){
   int i, soma=0, prod=1;
   int valor[i];

 for(i=0; i<v; i++)
 {
 printf("\nQual o %d° elemento? ", i+1);
 scanf("%d", &valor[i]);
 }
for(i=0; i<v; i++)
 {
soma+=valor[i];
prod*=valor[i];
}
printf("\nA soma do vetor é: %d\n", soma);
printf("\nO produto do vetor é: %d\n", prod);
}
main()
{
 int v;
printf("Informe o tamanho do vetor: ");
scanf("%d", &v);
vetorch(v);
 
  return 0;
}