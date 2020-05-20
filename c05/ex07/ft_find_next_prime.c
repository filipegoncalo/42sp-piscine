/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_find_next_prime.c                                 :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:54:52 by fisantos            #+#    #+#             */
/*   Updated: 2019/12/09 19:54:54 by fisantos           ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

int		ft_is_prime(int nb)
{
	int d;

	if (nb <= 1 || nb > 2147483647)
		return (0);
	d = 2;
	while (d <= nb / d)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}
