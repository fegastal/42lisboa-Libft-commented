/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:54:23 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 21:53:28 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ela copia a string de source(src) terminada em nulo
// para o fim da destiny(dst).

// A strlcpy() e a strncat() sao projetadas para
// evitar estouros de buffer e descartam dados
// maiores do que o comprimento especificado, independentemente
// de caberem ou nao no buffer.

// Copia e concatena strings de caracteres.
// Seu uso inapropriado pode resultar em vulnerabilidade de
// estouro de buffer.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0 ;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0' ;
	}
	return (srcsize);
}

/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int		main(void)
{
	char	dst[50];
	char	*src;
	int		dstsize;

	src = "vamos com isso, meu caro";
	dstsize = 10;
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	printf(".%s.\n\n", dst);
	printf("%lu\n", strlcpy(dst, src, dstsize));
	printf(".%s.\n\n", dst);
} */
