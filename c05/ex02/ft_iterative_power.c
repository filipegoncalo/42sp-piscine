/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_iterative_power.c                                 :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:49:50 by fisantos            #+#    #+#             */
/*   Updated: 2019/12/09 19:49:58 by fisantos           ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
