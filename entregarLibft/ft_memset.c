/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:56:11 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 21:11:58 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Usada para colocar um valor em byte para
// o bloco de memoria atraves de byte por byte.

// O argumento 1 e o pointer no endereco de memoria,
// onde ela estara;
// O argumento 2 e o valor que sera copiado para o bloco de memoria;
// O argumento 3 e o numero de bytes no bloco de memoria;

// Entao, em um certo endereco (address), colocarei uma certa
// quantidade de inteiros e, no meu computador, serao n bytes.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*address;

	i = 0;
	address = (unsigned char *)s;
	while (i < n)
	{
		address[i] = c;
		i++;
	}
	return (s = address);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "Eu quero muito aprender a programar.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
} */
