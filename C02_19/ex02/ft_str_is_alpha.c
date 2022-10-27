/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilants <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:32:54 by jmilants          #+#    #+#             */
/*   Updated: 2022/09/15 16:26:48 by jmilants         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if ((str[i] < 'A' && str[i] > 'Z') || (str[i] > 'z' && str[i] < 'a'))
			return (0);
	}
	return (1);
}

#include <unistd.h>
#include <stdio.h>
int main() 
{
	int	i;

	i = ft_str_is_alpha("123");
	i += '0';
	
	write(1, &i, 1);
	printf("\n%d\n", i);
	
	return (0);
}
