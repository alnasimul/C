#include <stdio.h>
#include <string.h>
int main(){
    int i,j,len;

    char str1[10] = "madam";
    char str2[10];

    len = strlen(str1);

    for(j=0,i=len-1;i>=0;i--,j++){
        str2[j] = str1[i];
    }
    str2[j] = '\0';

    printf("%s\n",str2);

    int d = strcmp(str1,str2);

    if(d==0){
        printf("Pallindrome \n");
    }else{
        printf("Not pallindrome \n");
    }




    return 0;
}
