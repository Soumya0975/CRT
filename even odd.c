#include <stdio.h>

int main() {
    int arr[10],i,even=0,odd=0;
    for(i=0;i<=10;i++)
    {
        printf("enter a value of array arr[%d]:",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
        even++;
        }
        else
        {
            odd++;
        }

    }
printf("even=%d and odd=%d",even,odd);

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
enter a value of array arr[10]:11
even=5 and odd=6

=== Code Execution Successful ===
