/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:10:32 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:11:24 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// size_t seria o mesmo que dizer unsigned,
// isso porque size nao pode ser negativo.

// Temos uma string pequena que precisa ser
// encontrada em uma string maior.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	*big;
	char	*little;
	big = "abcdefghijkeikd";
	little = "def";
	printf("%s\n", strnstr(big, little, 15));
	printf("%s\n", ft_strnstr(big, little, 15));
} */