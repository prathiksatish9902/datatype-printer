#include<stdio.h>
int main()
{
    float n;
    printf("Enter the Input\n");
    scanf("%f",&n);
    float x= n-(int)n;
    if(x>0 || x<0)
    {
        printf("Input is float\n");
    }

    else
    {
        if(n>=1)
        {
            printf("Input is int\n");

        }
        else if(n<=-1)
        {
            printf("Input is Signed int\n");

        }

        else if((n>='A' || n<='Z')||(n>='a' || n<='z'))
        {
            printf("Input is Char\n");

        }


        else
        {
            printf("Invalid Input\n");

        }
    }

}
