/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:18:18 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 23:06:17 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Procura pela primeira ocorrencia do caractere 'c' (um char unsigned)
// nos primeiros 'n' bytes da string apontada pelo argumento str.

// *str seria o ponteiro para o bloco de memoria onde a busca e realizada.

// 'c' seria o valor a ser passado como um int. 

// A funcao realiza uma busca byte por byte, usando a conversao
// unsigned char deste valor.

// 'n' seria o numero de bytes a serem analisados.

// note que o retorno faz uma juncao do que ha na string depois tambem!

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	*str;
	int	c;
	str = "abcdef";
	c = 'e';
	printf("minha funcao = %s\n", ft_memchr(str, c, 6));
	printf("funcao = %s\n", memchr(str, c, 6));
} */