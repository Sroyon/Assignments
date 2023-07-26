#include <stdio.h>

int main()
{
    int a=50,b=20,c=10;
    if(a<b)
    {
        if(a<c)
        {
            printf("A is smaller with value %d",a);
        }
        else
        {
            printf("C is smaller with value %d",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("B is smaller with value %d",b);
        }
        else
        {
            printf("C is smaller with value %d",c);
        }
    }

    return 0;
}
