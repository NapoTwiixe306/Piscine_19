#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int resu;

    resu = nb;
    if (power > 1)
        return (nb *ft_recursive_power(nb, (power - 1)));
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);    
}

int main(int argc, char const *argv[])
{
    printf("%i", ft_recursive_power(5, 1));
    return 0;
}
