// A. Codeforces Checking
#include <stdio.h>
#include <string.h>

void codeforces(char ch)
{
    switch (ch)
    {
    case 'c':
    case 'o':
    case 'd':
    case 'e':
    case 'f':
    case 'r':
    case 's':
        printf("YES\n");
        break;
    default:
        printf("NO\n");
        break;
    }
}

int main()
{
    int number;
    scanf("%d", &number);
    getchar();
    char ch;
    char array[number];

    for (int i = 0; i < number; i++)
    {
        scanf("%c", &array[i]);
        getchar();
    }
    for (int i = 0; i < number; i++)
    {
        codeforces(array[i]);
    }

    return 0;
}
