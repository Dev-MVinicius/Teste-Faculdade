#include <stdio.h>

int main()
{
    float a,b,c,media ;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);

    printf("Digite a segunda nota: ");
    scanf("%f", &b);

    printf("digite a terceira nota: ");
    scanf("%f", &c);
    
    media= (a+b+c)/3;

     printf("a suma media eh: %f", media);

    return 0;
}
