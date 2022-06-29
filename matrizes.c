#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   
    int rows, cols;
    int *p_matrix;
    printf("quantidade de rows: ");
    scanf("%d", &rows);
    printf("quantidade de cols: ");
    scanf("%d", &cols);
    int enderecos = cols * rows;
    p_matrix = (int *)(malloc(enderecos * sizeof (int)));
    if (p_matrix == NULL) {
        puts("bruhhhh");
        return 1;
    }
    srand(time(NULL));
    for (int i = 0; i < enderecos; i++) {
        p_matrix[i] = rand() % 100;
    }
    for (int i = 0; i < enderecos; i++) {
        printf("%d ", p_matrix[i]);
        if (i % cols == cols-1) {
            puts("\n");    
        }
    }
    return 0;
}
