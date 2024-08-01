#include <stdio.h>
#include <ctype.h>

int compareStrings(char *str1, char *str2)
 {
    while (*str1 != '\0' && *str2 != '\0')
    {
        char char1 = tolower(*str1);
        char char2 = tolower(*str2);

        if (char1 < char2)
        {
            return -1;
        } else if (char1 > char2)
        {
            return 1;
        }
        str1++;
        str2++;
    }
    return 0;
}

int main()
{
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);
    int result = compareStrings(str1, str2);
    printf("%d\n", result);

    return 0;
}
