/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:07:54 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 18:46:07 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copia (de tras para frente) 'n' caracteres de str2 (origem)
// para a str1 (destino), mas para blocos de memoria sobrepostos!
// Mais seguro do que o memcpy()
// Retorna um ponteiro para o destino, que eh str1.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (a < b)
	{
		while (len--)
			b[len] = a[len];
	}
	else
		ft_memcpy(b, a, len);
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[] = "ABC";
	char	dest[] = "abcdef";

	printf("minha funcao = %s\n", ft_memmove(dest, src, 2));
	printf("funcao = %s\n", memmove(dest, src, 2));
} */
