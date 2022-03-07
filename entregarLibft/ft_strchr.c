/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:07:20 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 22:44:24 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ela procura uma ocorrencia do caractere 'c' (um unsigned char)
// na string apontada pelo argumento str.

// 'c' sera o caractere a ser localizado. Ele eh passado como
// um int, mas eh convertido internamente de volta para char.

// Retorna um ponteiro para a ultima ocorrencia do caractere
// em str. Se o valor nao for encontrado, a funcao retornara
// um ponteiro NULO.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (unsigned char)c != *s)
		s++;
	if ((unsigned char)c == *s)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int main()
{
    char ponto;
    char texto[] = "42 eh a resposta de tudo";
    ponto = 't';
    printf("%s \n", ft_strchr(texto, ('t' + 256)));
} */
