/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:07:23 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:12:45 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Para duplicar uma string, retorna  um ponteiro.

// Uma string de bytes terminada em nulo é uma duplicata
// da string apontada por s.

// A memoria obtida é feita dinamicamente usando malloc
// e, portanto, pode ser liberada usando free().

// Retorna um ponteiro para a string s duplicada.

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	i = ft_strlen(s) + 1;
	dst = malloc(sizeof(char) * i);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s, i);
	return (dst);
}

/*
#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "HakunaMatata";
 
    // Uma copia de source sera criada dinamicamente
    // e um pointer sera retornado
    char* target = strdup(source);
 
    printf("%s", target);
    return 0;
} */