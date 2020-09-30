#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x,y;
    printf("Informe o valor da coordenada X: ");
    scanf("%d",&x);
    printf("Informe o valor da coordenada Y: ");
    scanf("%d",&y);

    if ((x > 10 || x < -10)||(y>10||y< -10)) {
        printf("ERROOOOUUUUU!!");
    } else
    if ((x >= -1 && x <= 1)&&(y >= -1 && y <= 1)) {
        printf("ACERTOOOOUUU!!\n10 pontos!");
    } else
    if ((x >= -5 && x <= 5)&&(y >= -5 && y <= 5)) {
        printf("ACERTOOOOUUU!!\n5 pontos!");
    } else
    if ((x >= -10 && x <= 10)&&(y >= -10 && y <= 10)) {
        printf("ACERTOOOOUUU!!\n1 ponto");
    }
    return 0;
}
