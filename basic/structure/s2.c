#include <stdio.h>

struct student {
    int id;
    char name[40];
};

int main(){
    struct student one;

    one.id = 1;
    strcpy(one.name,"Al Nasimul Haque");

    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);

    return 0;
}