// program to search element by using binary search algorithm
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int d[47],i,j,size,t,key,l,h,m;
    printf("Enter the size of the array.....:");
    scanf("%d",&size);
    //logic to fill the array with random numbers generation
    srand(time(0));
    for(i=0;i<size;i++)
        d[i]=(rand()%100)+1;
    // display the array elements
    for(i=0;i<size;i++)
    printf("\n%d - %d",i,d[i]);
    //logic to sort the array
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(d[i]>d[j])
            {
                t=d[i];
                d[i]=d[j];
                d[j]=t;
            }
        }
    }
    printf("\ndisplaying the array in sorted order i.e in ascending order");
    for(i=0;i<size;i++)
    printf("\n%d - %d",i,d[i]);
    printf("\n\n BINARY SEARCH ALGORITHM\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter the key element to search...........:");
    scanf("%d",&key);
    l=0;
    h=size-1;
    m=(l+h)/2;
    if(key>d[h])
        printf("%d is not found....",key);
    else if(key<d[l])
         printf("%d is not found....",key);
    else
    {
    while(l<h&&d[m]!=key)
    {
        if(key<d[m])
          h=m-1;
        else if(key>d[m])
           l=m+1;
        m=(l+h)/2;

    }
     if(key==d[m])
    {
        printf("key (%d) is found at index %d",key,m);
    }
    else
    printf("%d is not found....",key);
    }



}
