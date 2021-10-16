#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//ON THE STACK                               ON THE HEAP
//=============                              ===========
//   -----------
//s  | "Freya" |
//   |  18     |
//   |  2016   |
//   |  4.0    |
//   -----------

//     -----                                   ----------- 
//sptr | *-|---------------------------------> | "Lars"  |
//     -----                                   |  20     |
//                                             |  2015   |
//                                             |  3.2    |
//                                             ----------- 
//You can also have field values that are pointers:

struct student {
    char name[50];
    int  age;
    int  year;
    float  gpa;
};

int main(void) {
    struct student s;
    struct student *sptr;
    //Please do not modify the code above this line
    //
    //Your code here please construct a struct student on the stack and another struct student on heap, 
    //as shown above in the ascii figure.
    //
    //Please do not modify the code underneath
    printf("%s's info: %d years old, graduated in %d with %.2f gpa\n", s.name, s.age, s.year, s.gpa);
    printf("%s's info: %d years old, graduated in %d with %.2f gpa\n", sptr->name, sptr->age, sptr->year, sptr->gpa);
    free(sptr);
}
