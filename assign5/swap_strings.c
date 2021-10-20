#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//In this question you will implement string version of swap
//You are not allowed to use globals
//You are only allowed to use pass-by-address/reference

// void swap_string(char **x, char **y) {
//     char * temp = *x; // give temp the value at x;
//     *x = *y;
//     *y = temp; 
// }

void swap_string1(char *x, char *y){
    char * temp; //this is a string pointer;
    strcpy(temp, "hi there");
    printf("%s\n", temp);
    printf("%p\n", temp);
    printf("%d\n", temp);
    // *temp = *x;  // this pointer point to x'place;
    // *x = *y;      // x pointer point to y'place;
    // *y = *temp;       // y pointer point to temp
}


int main(void){
    char * a = "Hello";
    char * b = "World";

    printf("before swap, a=%s\n", a); 
    printf("before swap, b=%s\n", b);

    printf("before swap, a=%p\n", a); 
    printf("before swap, b=%p\n", b);

    //Do not modify any code above this line in main function
    // swap_string(&a, &b);
    swap_string1(a, b);
    
    //Do not modify any code underneath
    printf("after swap, a=%s\n", a); 
    printf("after swap, b=%s\n", b);

}
