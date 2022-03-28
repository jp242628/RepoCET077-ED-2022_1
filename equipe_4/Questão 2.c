#include <stdio.h>

int soma(int primeiro, int segundo){
    if(primeiro == 0){
        return segundo;
    }
    primeiro--;
    segundo++;
    return soma(primeiro, segundo);
}

int main(void){
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);
    printf("soma = %d\n", soma(x,y));

    return 0;
}