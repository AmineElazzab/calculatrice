#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, choice;
    while(choice=0){

    printf("Enter your choice\n");
    printf(" 1. +\n 2. -\n 3. *\n 4. /\n");
    scanf("%d", &choice);


     if(choice>4)
     {
         printf("Select with in the rang\n");
     }
     else
     {
         printf("Enter 2 integer number\n");
         scanf("%d %d", &a, &b);
     }
     switch(choice)
     {
         case 1: printf("%d+%d = %d\n", a, b, (a+b)); break;

         case 2: printf("%d-%d = %d\n", a, b, (a-b)); break;

         case 3: printf("%d*%d = %d\n", a, b, (a*b)); break;

         case 4: if (b != 0)
                { printf("%d/%d = %d\n", a, b, (a/b)); break;}

                 else
                    printf("Number can't be divided by 0\n"); break;

                    default:
                    printf("You entered wrong choice\n"); break;}
     }

    return 0;
}
