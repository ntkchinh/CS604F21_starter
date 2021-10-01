// calculate total and average of a student's grades

#include<stdio.h>
int main()
{
    //TODO: please declare the right types for variables by
    //replacing ??? with types (in lines 8 and 9)
    int _a, _b, _c, _d, _e;
    float _total, _average;
    printf("please enter grades of 5 subjects : \n");
    scanf("%d%d%d%d%d",&_a, &_b, &_c, &_d, &_e);
    //TODO calculate total and average of a student's grade (store into _total and _average). Again beware of integer division, if you enter 1,2,2,2,2 then average should be 1.8, not 1
_total = 1;
_average = 2;
    printf("Total grade = %f\n", _total);
    printf("Average grade = %f\n",_average);
    return 0;

}
