/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:56:08 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:37:35 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cria uma sequencia que consiste em str1 concatenando str2.

// Ela eh retornada e alocada fora da memoria temporaria e,
// portanto, eh valida somente enquanto durar a clausula.

// Se nao houver espaco temporario suficinte disponivel,
// strjoin NAO sera executada e um erro sera gerado.

// Detalhe: nao pode ser considerado o ultimo caractere
// da primeira string. Ou seja, desconsiderar o '\0' da str1
// e considerar o '\0' da str2.

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*sjoin;
	size_t	size;
	size_t	i;
	size_t	j;

	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	sjoin = malloc(size * sizeof(char));
	if (sjoin == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		sjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		sjoin[i + j] = s2[j];
		j++;
	}
	sjoin[i + j] = '\0';
	return (sjoin);
}
