#include <stdio.h>

int main() {
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter a value of array arr[%d]:",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    // Write C code here
    printf("sum=%d",sum);


    return 0;
}

enter a value of array arr[0]:1
enter a value of array arr[1]:2
enter a value of array arr[2]:3
enter a value of array arr[3]:4
enter a value of array arr[4]:5
enter a value of array arr[5]:6
enter a value of array arr[6]:7
enter a value of array arr[7]:8
enter a value of array arr[8]:9
enter a value of array arr[9]:10
sum=55

=== Code Execution Successful ===
