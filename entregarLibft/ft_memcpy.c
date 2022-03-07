/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:58:02 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 21:29:50 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ela copia n caracteres da area de memoria 'src' para a area de memoria 'dst'.
// Arg1 eh um ponteiro para a matriz de destino onde o conteudo
// deve ser copiado, convertido para um ponteiro do tipo void *.
// Arg2 eh um ponteiro para a fonte de dados, convertida para um
// ponteiro do tipo void *.
// Arg3 eh o num de bytes a serem copiados.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!src && !dest)
		return (NULL);
	while (++i < n)
		*(char *)(dest + i) = *(char *)(src + i);
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "ABC";
	char	dest[] = "abcdef";

	printf("minha funcao = %s\n", ft_memcpy(dest, src, 2));
	printf("funcao = %s\n", memcpy(dest, src, 2));
}*/
