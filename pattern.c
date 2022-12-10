/*
 To print the pyramid below

i/p: n=6

 1
 22
 333
 55555
88888888
13131313131313131313131313

I/P: n=5

 1
 22
 333
 55555
 88888888

I/P: n=7

 1
 22
 333
 55555
 88888888
 13131313131313131313131313
 212121212121212121212121212121212121212121
 */

#include<stdio.h>
int main()
{
    int a = 1, b = 2; 
    int i, j, n, temp = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d\n", a);
    printf("%d", b);
    printf("%d\n", b);
    for(i = 3; i <= n; i++)
    {
        temp = a + b;
        for(j = 1; j <= temp; j++)
         {
             printf("%d", temp);
         }
        printf("\n");
        a = b;
        b = temp;
    }
}

