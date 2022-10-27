/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilants <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:05:35 by jmilants          #+#    #+#             */
/*   Updated: 2022/09/12 10:10:24 by jmilants         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_puchar(char c)
{
    write (1, &c, 1);
}

void	ft_putstr(int *str)
{
    int	i;

    i = 0;
    while (*(str + i) != '\0')
    {
        ft_puchar (*(str + i));
        i++;
    }
}
