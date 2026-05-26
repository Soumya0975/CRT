#include <stdio.h>

int main() {
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter a value of array arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    // Write C code here
    printf("the array elements are:");
    for(i=0;i<5;i++)
{
        printf("%d",arr[i]);

}
    return 0;
}
