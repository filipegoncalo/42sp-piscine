/* **************************************************************************** */
/*                                                                              */
/*                                                          :::      ::::::::   */
/*   ft_recursive_factorial.c                             :+:      :+:    :+:   */
/*                                                      +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                  +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:26:23 by fisantos            #+#    #+#             */
/*   Updated: 2019/12/09 18:26:41 by fisantos           ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
