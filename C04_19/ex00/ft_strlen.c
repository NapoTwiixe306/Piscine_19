int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*#include <stdio.h>
int main ()
{
    printf("%i", ft_strlen("1234abcde\n"));
    return(0);
}
*/
