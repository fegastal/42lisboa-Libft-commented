/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:21:49 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 18:58:32 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Nessa funcao, encontramos o valor ASCII de um caractere;
// Um numero inteiro, tem valor de 0 a 127 na tabela;
// Por exemplo, o valor de 'A' seria de 65;
// Isso significa que, se voce atribuir 'A' a uma variavel de caractere,
// 65 sera armazenado na variavel em vez de 'A' em si (aspas simples).

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	c;

	printf ("Enter a character: ");
	scanf("%c", &c);
	printf ("ASCII value of %c = %d", c, c);
	return (0);
} */
