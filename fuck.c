#include <stdio.h>
#include <string.h>
int main()
{
    char input[100000];
    while (scanf("%s", input))
    {
        int count = 0;
        char buffer = input[0];
        for (int i = 0; i < strlen(input); i++)
        {
            if (buffer == input[i])
                count++;
            else if (i == (strlen(input) - 1))
            {
                if (buffer == input[i])
                {
                    count++;
                    printf("%c", buffer);
                    printf("%d", count);
                    //printf("A");
                }
                else if (buffer != input[i])
                {
                    printf("%c", input[i]);
                    printf("1");
                    //printf("B");
                }
            }
            else
            {
                printf("%c", buffer);
                printf("%d", count);
                printf(" ");
                buffer = input[i];
                count = 1;
                //printf("C");
            }
        }
    }
    system("PAUSE");
    return 0;
}
