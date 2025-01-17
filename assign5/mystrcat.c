#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Please only modify mystrcat
char* mystrcat(char * first, char * second){
    //your code here:
        //creates a string allocated on heap which equals to the combination of the first string and the second string and return the combined string.
        //You are not allowed to use strcat or strcpy
        //You are allowed to use strlen
    
    int len1 = strlen(first);
    int len2 = strlen(second);

    int concatLen = len1 + len2 + 1;
    
    char *concatStr = malloc(concatLen);

    concatStr[concatLen - 1] = '\0';

    for (int i = 0; i < concatLen - 1; i ++){
        if (i >= len1){
            concatStr[i] = second [i-len1];
        }
        else
        concatStr[i] = first [i];
    }

    return concatStr;
}

int main(void) {
    char first[21];
    printf("Please enter first string(less than 20 chars):\n");
    scanf("%s", first);
    char second[21];
    printf("Please enter second string(less than 20 chars):\n");
    scanf("%s", second);

    char *combined = mystrcat(first, second);
    
    printf("%s + %s = %s\n", first, second, combined);

    free(combined);
}
