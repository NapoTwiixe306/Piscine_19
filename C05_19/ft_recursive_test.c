 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien.milants@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:56:40 by julien            #+#    #+#             */
/*   Updated: 2022/09/18 10:06:57 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
exemple d'une fonction recursvice, c'est une fonction qui ce rappelle elle meme, et qui contient une condition d'arret
*/

#include <unistd.h>

int fn(int i)
{
    if (i <= 5)
    {
        i += 1;
        write(1, "D", 1);
        fn(i);
        write(1, "F", 1);
        return (0);
    }
    else
    {
        return (0);
    }
    
}

int main()
{
    fn(0);
    return 0;
}
