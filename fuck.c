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
            {
                if (i == (strlen(input) - 1))
                {
                    count++;
                    printf("%c", buffer);
                    printf("%d", count);
                }
                else
                    count++;
            }
            else
            {
                if (i == (strlen(input) - 1))
                {
                    printf("%c", input[strlen(input) - 1]);
                    printf("1");
                }
                else
                {
                    printf("%c", buffer);
                    printf("%d", count);
                    printf(" ");
                    buffer = input[i];
                    count = 1;
                }
            }
        }
    }
    system("PAUSE");
    return 0;
}
