#include <stdio.h>
#define MUL(a,b) a*b
#define SQ(a) MUL(a,a)
#define PRINT_VAL(a) \
   printf("The Number of "#a" is %d\n",a)
#define SIZE 202
#undef SIZE
#define SIZE 13876
#define LEVEL 2

#define DEBUG


int main()
{
    #if LEVEL == 1
    printf("Level 1");
   #elif LEVEL == 2
    printf("Level 2");
   #else
    printf("Other level");
   #endif
   #ifdef DEBUG
     printf("Debug mode ON");
   #endif
    int a=10,b=1013;
    int num=10031;
    printf("%d\n",MUL(a,b));
    printf("%d\n",MUL(a+1,b+1));
    printf("%d\n",SQ(10));
    PRINT_VAL(num);
    printf("%d\n",SIZE);
}