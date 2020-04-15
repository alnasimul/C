#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ara[2], num[2];
    int i, j , n;

    for( i = 0; i < 2; i++){
        printf("Enter the number of students for class %d: ",i+1);
        scanf("%d",&n);
        num[i] = n;
        // now allocating the memory
        ara[i] = (int *) malloc(sizeof(int) * n);
        if(ara[i] == NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
        for(j = 0; j < n; j++){
            printf("Enter the mark for student %d: ",j+1);
            scanf("%d",&ara[i][j]);
        }
    }

    printf("Output\n\n");

    for(i = 0; i < 2; i++){
        printf("Class %d: ",i+1);
        for(j = 0; j < num[i] ; j++){
            printf("%4d",ara[i][j]);
        }

        free(ara[i]);
        printf("\n\n");
    }
    return 0;
}
