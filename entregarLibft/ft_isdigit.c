/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:14:47 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 18:44:22 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica se o caractere seria numerico (0 - 9) ou nao
// Ela recebe um argumento na forma de um inteiro
// Ela retorna o valor do tipo int;
// Internamente, o caractere seria convertido em seu valor ASCII
// Nota-se que o arquivo libft.h contera o prototipo desta funcao
// O numero 0 na tabela ASCII equivale a 48
// O numero 9 equivale a 57

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = '5';
	printf("Result when numeric character is passed:%d", ft_isdigit(c));
	c = 't';
	printf("\nResult when non-numeric character is passed:%d", ft_isdigit(c));
	return (0);
}
*/