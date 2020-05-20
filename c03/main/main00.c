/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:27:06 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/06 03:24:05 by fisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char s1[] = "lala";
	char s2[] = "lele";
	char s3[] = "lele";

	printf("lala e lolo - Esperado: %3d / Resultado: %3d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("lala e lala - Esperado: %3d / Resultado: %3d\n", strcmp(s1, s3), ft_strcmp(s1, s3)); 
	printf("lolo e lala - Esperado: %3d / Resultado: %3d\n", strcmp(s2, s1), ft_strcmp(s2, s1));
}
