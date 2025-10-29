#include <stdio.h>

int ehTriangulo(float a, float b, float c){
    //eu sei que o enunciado não pediu função dentro do procedimento, mas achei mais facil primeiro separar
    //a tarefa de determinar se um conjunto de números é tringulo antes de avaliar qual tringulo é, além de
    //poder praticar a diferença entre funcao e procedimento

    if(a >= 0 && b >= 0 && c >= 0){
        // printf("São todos maiores que zero, continuando..."); //debug pra saber o que tava retornando zero
        if ( (a < (b + c)) && (b < (a + c)) && (c < (a + b)) ){
            return 1;
        }
    }
    return 0;
}

void avaliaTriangulo(float x, float y, float z){
    int triangulo = ehTriangulo(x, y, z);

    if(!triangulo){
        printf("Isso nao eh um triangulo!\nInsira valores validos!\n");
    } else {
        //printf("Eh triangulo!\n");
        if(x==y && y==z && x==z){
            printf("Isso eh triangulo equilatero!\n");
        } else if(x==y || y==z || x==z){
            printf("Isso eh triangulo isoceles!\n");
        } else {
            printf("Isso eh triangulo escaleno!\n");
        }

    }
}

int main()
{
    int continua = 1;
    do {
        system("cls"); //achei elegante limpar a tela
        printf("Digite as medidas do triangulo:\n");
        float x, y, z;
        scanf("%f %f %f", &x, &y, &z);
        printf("Medidas: %.2f %.2f %.2f\n", x, y, z);
        avaliaTriangulo(x, y, z);
        printf("Quer avaliar mais um triangulo?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &continua);
    } while (continua == 1);
    return 0;
}
