#include <stdio.h>
#include<string.h>

// Vowels, Consonanta, Digits, Words Counting ;

int main(){
    char str[100],ch;
    int i,vowel,consonant,digit;

    printf("Please enter a string: \n");
    gets(str);

    vowel=0;
    consonant=0;
    digit=0;

    for (i=0;i<strlen(str);i++){
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <='Z')){
            consonant++;
        }
        else if( str[i] >= 0 && str[i] >= 9){
            digit++;
        }
    }

    printf("Vowel: %d\n",vowel);
    printf("Consonant: %d\n",consonant);
    printf("Digit: %d\n",digit);

    return 0;
}
