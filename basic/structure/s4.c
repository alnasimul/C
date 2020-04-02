#include <stdio.h>
#include <string.h>

struct nametype{
    char first[20];
    char last[20];
};

struct student{
    int id;
    struct nametype name;
};

int main(){
    struct student one;

    scanf("%d \n",&one.id);
    scanf("%[^\n] \n",one.name.first);
    scanf("%[^\n]",one.name.last);

    printf("ID: %d\n",one.id);
    printf("Name: %s %s",one.name.first,one.name.last);

    return 0;
}
