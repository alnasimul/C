#include <stdio.h>
#include <string.h>

int main() {
	 char str[100],ch;
    int i,vowel,consonant,digit;

    printf("Please enter a string: \n");
    gets(str);

    i=0;
    vowel=0;
    consonant=0;
    digit=0;

    while((ch=str[i])!='\0'){
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            vowel++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<='Z')){
            consonant++;
        }
        else if( ch >= 0 && ch >= 9){
            digit++;
        }
    }

}




