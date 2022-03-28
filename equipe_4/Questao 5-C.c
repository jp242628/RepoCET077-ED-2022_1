#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define T 20

int fibonacci(int n, int *vetor){
    int i;

    printf("\n\n");
    vetor[0]=0;
    vetor[1]=1;
    for(i=2; i<n; i++){
        vetor[i]=vetor[i-1]+vetor[i-2];
    }
    vetor[n]=-1;

    return(vetor[n]);
}

int main (){
setlocale(LC_ALL, "portuguese");
    int *vetor, i, n, c;
    do{
        vetor=(int*)malloc(sizeof(int)*T);
        do{
            printf("Digite a quantidade de termos (<46).:\t");
            scanf("%d", &n);
        }while(n<0||n>46);

        vetor=(int*)realloc(vetor, sizeof(int)*n+1);

        fibonacci(n, vetor);

        for(i=0; i<=n; i++){
            printf("%d.:\t%d\n", i, *(vetor+i));
        }

        free(vetor);

        printf("\n\n\n\n0-Finalizar\n1-Continuar\n\n");
        scanf("%d", &c);
        printf("\n\n=================================================================\n\n");
    }while(c!=0);
    return(0);
}
