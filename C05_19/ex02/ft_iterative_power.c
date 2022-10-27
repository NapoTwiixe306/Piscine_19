#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int resu;

    resu = nb;
    while (power > 1)
    {
        resu *= nb;
        power--;
    }
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    return (resu);
}

int main(void)
{
    printf("%i", ft_iterative_power(0, 0));
    return 0;
}
