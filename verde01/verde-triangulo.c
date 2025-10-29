#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0 && (a < (b + c)) && (b < (a + c)) && (c < (a + b)) ){
        if(a==b && b==c && a==c){
            printf("equilatero");
        } else if(a==b || b==c || a==c){
            printf("isosceles");
        } else {
            printf("escaleno");
        }
    } else {
        printf("Triangulo invalido");
    }

    return 0;
}
