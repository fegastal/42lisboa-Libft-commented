/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:52:23 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 22:31:51 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converte letras minusculas em maiusculas.

// Aqui ha uma diferenca, nao uma somatoria. 

// Retorna o caractere maiusculo correspondente.

// Na tabela ASCII, os caracteres minusculos sao de 97 a 122 e
// 32 sempre sera a diferenca um minusculo e maiusculo.

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		a -= 32;
	return (a);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int x;
	x = 'z';
	printf("funcao = %d\n", toupper(x));
	printf("minha funcaoo = %d\n", ft_toupper(x));
}
*/
