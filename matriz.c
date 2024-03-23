#include <stdio.h>
#include <stdlib.h>

typedef struct celda_t{
    int x;
    int y;
} Celda;

int imprimir_matriz (Celda ** Matriz, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d , %d | ", Matriz[i][j].x, Matriz[i][j].y);
        }
        printf("\n");
    }
}

int rellenar_con_celdas(Celda **Matriz, int rows, int columns){
    for (int i = 0; i < rows; i++){

        for (int j = 0; j < columns; j++){
            Celda nueva_celda;
            nueva_celda.x = i;
            nueva_celda.y = j;
            Matriz[i][j] = nueva_celda;
        }
    }
}


int main (int argc, char **argv){

    int rows;
    int columns;

    printf("Enter the size of your Matrix: ");
    scanf("%d %d", &rows, &columns);
    printf("%d %d\n", rows, columns);

    Celda** Matriz = calloc(rows, sizeof(Celda*));

    for (int i = 0; i < rows; i++){
        Matriz[i] = calloc(columns, sizeof(Celda));
    }

    

    imprimir_matriz(Matriz, rows, columns);

    for (int i = 0; i < 3; i++){
        free(Matriz[i]);
    }

    free(Matriz);

}