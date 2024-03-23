#include <stdio.h>
#include <stdlib.h>

typedef struct celda_t{
    int x;
    int y;
} Celda;


int main (int argc, char **argv){

    Celda** Matriz = calloc(3, sizeof(Celda*));

    for (int i = 0; i < 3; i++){
        Matriz[i] = calloc(3, sizeof(Celda));
    }

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            Celda nueva_celda;
            nueva_celda.x = i;
            nueva_celda.y = j;
            Matriz[i][j] = nueva_celda;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d , %d | ", Matriz[i][j].x, Matriz[i][j].y);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        free(Matriz[i]);
    }

    free(Matriz);

}