/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:39:50 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 22:31:37 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Se o caractere for maiusculo, converte ele em minusculo.

// Aqui ha uma somatoria, nao uma diferenca. 

// O caractere e armazenado no formato do tipo int no programa em C.

// Quando um caractere (inteiro) e passado como argumento,
// o valor em ASCII correspondente (inteiro) do caractere
// sera passado em vez do proprio caractere.

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
		a += 32;
	return (a);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int x;
	x = 'A';
	printf("funcao original = %d\n", tolower(x));
	printf("minha funcao = %d\n", ft_tolower(x));
}
*/
