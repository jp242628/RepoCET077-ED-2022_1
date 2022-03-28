//B


#include <stdio.h>

int mult(int n, int v){
    int ch;
    if(n>0){
        n--;
        ch = v;
    }
    else if (n<0){
        n++;
        ch = -v;
    }

    if(n==0)
        return ch;
    else
        return ch + mult(n,v);
}

int main(){

    int n,v,r=0;
    printf("\nInforme dois números naturais: ");
    scanf("%d %d", &n, &v);
    printf("\nMultiplicação = %d\n", r=mult(n,v));

    return 0;

}