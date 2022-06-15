#include <stdio.h>
int main(int argc, char *argv[])
{
    int x[10];
    printf("enter the number");
    scanf("%d %d %d %d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4],
          &x[5], &x[6], &x[7], &x[8], &x[9]);
    printf("%d %d %d %d %d %d %d %d %d %d \n",
           x[0], x[1], x[2], x[3], x[4],
           x[5], x[6], x[7], x[8], x[9]);
    return 0;
}