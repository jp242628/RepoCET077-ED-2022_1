#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int n){
   if(n==1||n==2){
       return 1;
   }
   else{
       return fibonacci(n-1) + fibonacci(n-2);
   }
}

int main(void){
   int n, i, c;

   do{
       printf("Digite a quantidade de termos.: ");
       scanf("%d", &n);

       printf("\n\n");
       for(i=0; i<n; i++){
           printf("[%d].:%d\n", i+1, fibonacci(i+1));
       }

       printf("\n\n1-Continuar\n0-Finalizar\n\n");
       scanf("%d", &c);
   }while(c!=0);
   return(0);
}
