#include <stdio.h>

int linear_s(char alphabets[], char key, int n)
{
    
    for (int i = 0; i < n; i++)
    {
    
        if (key == alphabets[i])
        {
            return i;
        }
    }
    return -1;
    
}

int main()
{
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

    int res, n;
    n = 26;
    char key;
    printf("enter key\n");
    scanf("%c", &key);
    res = linear_s(alphabets, key, n);
    printf("your char found at index %d", res);

    return 0;
}