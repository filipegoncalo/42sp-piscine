/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_fibonacci.c                                       :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:52:07 by fisantos            #+#    #+#             */
/*   Updated: 2019/12/09 19:52:13 by fisantos           ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
