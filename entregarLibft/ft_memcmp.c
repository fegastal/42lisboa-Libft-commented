/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:19:00 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:10:41 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compara dois blocos de memoria.

// Os primeiros numeros de bytes do bloco de memoria apontado por ptr1
// com os primeiros numeros de bytes apontados por ptr2.

// Retorna zero se todos corresponderem
// ou retorna um valor diferente de zero se nao corresponderem.

// Difere-se da strcmp porque ela nao para de comparar
// depois que encontrar um caractere nulo.

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if ((!str1 && !str2) || !n)
		return (0);
	if (str1 == str2 || n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
  char buffer1[] = "DWgaOtP12df0";
  char buffer2[] = "DWGAOTP12DF0";

  int n;

  n=memcmp ( buffer1, buffer2, sizeof(buffer1) );

  if (n>0) printf ("'%s' eh maior que '%s'.\n",buffer1,buffer2);
  else if (n<0) printf ("'%s' eh menor que '%s'.\n",buffer1,buffer2);
  else printf ("'%s' eh o mesmo que '%s'.\n",buffer1,buffer2);

  return 0;
}*/