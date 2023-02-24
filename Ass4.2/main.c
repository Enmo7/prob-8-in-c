#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    printf("Enter String: \n");
    gets(str);
    printf("Entered string is:\n %s\n",str);
    int start=0,end=strlen(str)-1;

    // Start variable points at the start of the string
    // End Variables points at the last index of the string
    while(start<end)
    {
        //Swapping characters at start and end
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        //Incrementing start and decrementing end
        start++;
        end--;
    }
    printf("Reversed string is:\n %s",str);

    return 0;
}
