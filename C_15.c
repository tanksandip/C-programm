#include<stdio.h>
int main(int argc, char const *argv[])
{
    int fn;
    float c;
    printf("ENter a faranhit=");
    scanf("%d",&fn);
    c=(fn-32)/1.8;
    printf("Cel=%0.2f",c);
    return 0;
}