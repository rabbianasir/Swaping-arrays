#include<stdio.h>
void main()
{
    int a[5],b[5],e[5],i;

    for(i=0;i<5;i++)
    {
        printf("enter the elements of array:");
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<5;i++)
    {
        e[i]=a[i];
        a[i]=b[i];
        b[i]=e[i];
    }
    printf("swaped arrays are:\n");
    for(i=0;i<5;i++)
        printf("\n%d\t %d",a[i],b[i]);
}
