/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:31:17 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 22:11:28 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copia a string de origem para a de destino (no final
// da matriz de caracteres) = String com concatenacao de comprimento.

// O ultimo parametro de tamanho de comprimento garante
// que C nao escreva alem do tamanho da matriz.

// strlcat e uma aternativa mais segura do que strcat.

// O tamanho total do buffer de destino e passado como
// parametro. Se nao houver espaco suficiente no buffer de
// destino para que toda a string de origem seja adicionada,
// a string que esta sendo copiada sera truncada.

// Observacao: se a string de destino NAO for inicialmente
// terminada em nulo, NADA sera copiado.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	r;
	int	size = 16;

	char	first[] = "Esta eh ";
	char	last[] = "uma potencial longa string";
	char	buffer[size];
	strcpy (buffer,first);
	r = ft_strlcat(buffer,last,size) ;
	puts(buffer) ;
	printf("Valor retornado:%d\n",r) ;
	if(r > size)
		puts("String truncada") ;
	else
		puts("String foi totamente copiada") ;
	return(0) ;
} */
