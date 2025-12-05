#include<stdio.h>
#include<newKeyWordExample.h>
int c=10;
void CallFunction(){
    static int No_of_Calls=0;
    printf("%d ",No_of_Calls);
    return;
}
void main(){
    auto int a=10 // auto keyword example;
    register int b=20; // register keyword example;
    printf("Auto a: %d\n",a);
    printf("Register b: %d\n",b);
    extern int c;
    printf("Extern c: %d\n",c);
    volatile int d=30; // volatile keyword example;
    printf("Volatile d: %d\n",d);
    CallFunction(); // static keyword example;
    CallFunction(); // static keyword example;
    CallFunction(); // static keyword example;
    return 0;
}