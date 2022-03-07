/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:45:30 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:26:59 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Tem como parametro a posicao do primeiro caractere
// a ser copiado como uma substring.

// Se for igual ao 'length' da string, a funcao
// retorna uma string vazia.

// Se for maior que o 'length' da string, ele lanca
// out-of-range: (len = ft_strlen + 1);

// Portanto, tem que ter uma 'length' menor
// que a string original para ser uma substring.

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		ptr[j++] = s[i++];
	ptr[j] = 0;
	return (ptr);
}
