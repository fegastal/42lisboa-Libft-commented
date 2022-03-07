/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:57:57 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 17:56:14 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Essa funcao verifica se um caractere e um alfabeto (a - z e A - Z) ou nao.
// Na tabela ASCII, o 'a' equivale a 97 e o 'z' equivale a 122.
// O 'A' equivale a 65 e o 'Z' equivale a 90.
// Se for um caractere, retorna (1). Senao, retorna (0).
// Prototipo: int	isalpha(int argument);
// Ela recebe um unico argumento na forma de um inteiro 
// e retorna um valor inteiro.

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	printf("Enter a character: ");
	scanf("%c", &c);
	if (ft_isalpha(c) == 0)
		printf("%c is not an alphabet.", c);
	else
		printf("%c is an alphabet.", c);
	return (0);
}
*/
