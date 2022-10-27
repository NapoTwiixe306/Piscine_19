/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien.milants@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:35:34 by julien            #+#    #+#             */
/*   Updated: 2022/09/18 14:36:07 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_fractorial(int nb)
{
	int	i;
	int	rslt;

	i = 0;
	rslt = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (++i <= nb)
	{
		rslt *= i;
	}
	return (rslt);
}
