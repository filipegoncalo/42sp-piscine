/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fisantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 04:27:43 by fisantos          #+#    #+#             */
/*   Updated: 2019/12/06 04:28:22 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char s1[10] = "abcd";
	char s3[10] = "abcd";
	char s2[5] = "efgh";
	char s4[5] = "efgh";
	unsigned int nb = 3;

	strncat(s1, s2, nb);
	ft_strncat(s3, s4, nb);
	printf("Esperado: %s / Resultado: %s\n", s1, s3);
}
