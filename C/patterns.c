//patterns
#include <stdio.h>
int main()
{
    //pattern 1
    /* 1
       12
       123
       1234
       12345
    */
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    //pattern 2
    /*  *****
        *****
        *****
        *****
        *****
    */
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //pattern 3
    /*  *****
        ****
        ***
        **
        *
    */
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //pattern 4
    /*  *
        **
        ***
        ****
        *****
    */
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //pattern 5
    /*  *****
         ****
          ***
           **
            *
    */
   for(int i=5;i>=1;i--)
   {
       for(int j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
    //pattern 6
    /*  1
        22
        333
        4444
        55555
    */
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    //pattern 7
    /*  A
        BB
        CCC
        DDDD
        EEEEE  
    */
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }
    //pattern 8
    /*  A
        B B
        C C C
        D D D D
        E E E E E
    */
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }
    //pattern 9
    /*  A
        B C
        D E F
        G H I J
        K L M N O
    */
   char ch = 'A';
   for(int i = 1; i <= 5; i++) {
       // Print leading spaces
       for(int space = 1; space <= 5 - i; space++) {
           printf(" ");
       }
       printf("\n");
       // Print characters
       for(int j = 1; j <= i; j++) {
           printf("%c ", ch);
           ch++;
       }
   }
   //pattern 10
   /*
       A
      B B
     C C C
    D D D D
   E E E E E
   */
    for(int i = 1; i <= 5; i++) {
         // Print leading spaces
         for(int space = 1; space <= 5 - i; space++) {
              printf(" ");
         }
         // Print characters
         for(int j = 1; j <= i; j++) {
              printf("%c ", 'A' + i - 1);
         }
         printf("\n");
    }
   return 0;
}