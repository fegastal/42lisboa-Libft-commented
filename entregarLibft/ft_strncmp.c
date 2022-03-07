/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:42:08 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 22:58:18 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compara o valor de, no maximo, os primeiros
// 'n' bytes de str1 e str2 (em ASCII).

// Considera-se que 'n' seria o maximo de caracteres a serem comparados.

// Retorna valores do tipo < 0, > 0, ou =. Ver a tabela de comparacao
// entre strings.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]) && (i < n -1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   ft_strcpy(str1, "abcdef");
   ft_strcpy(str2, "ABCDEF");

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
} */
