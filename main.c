#include <stdio.h>
#include <stdlib.h>

int main()
{
    int _size,num;
    printf("Enter size : \n");
    scanf("%i",&_size);
    int* ptr=malloc(_size*sizeof(int));

    for(int i=0; i<_size; i++)
    {
        printf("element %i : ",i+1);
        scanf("%i",&num);
        printf("\n");

        ptr[i]=num;
    }
    printf("\nArray is : ");
    for(int i=0; i<_size; i++)
    {
        printf("%i ",ptr[i]);
    }
    return 0;
}
