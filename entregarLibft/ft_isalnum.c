/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:18:31 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 18:53:17 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ela verifica se o argumento passado 
// e um caractere do tipo alfabetico / numerico ou nao.
// Prototipo: int	isalnum(int argumento);
// Se for numerico, retorna 1;
// Senao, retorna 0;
// Necessario dizer que colocar aspas simples
// e o mesmo que colocar o valor da tabela ASCII;
// Se nao colocar aspas simples, ele identifica como caractere;
// E ai da erro, porque espera-se um inteiro (como definido).

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	int		result;

	c = '5';
	result = ft_isalnum(c);
	printf("Quando %c for passado, o valor de retorno sera %d\n", c, result);
	c = 'Q';
	result = ft_isalnum(c);
	printf("Quando %c for passado, o valor de retorno sera %d\n", c, result);
	if (ft_isalnum (c) == 0)
		printf("%c nao e um caractere alfanumerico.", c);
	else
		printf("%c e um caractere alfanumerico.", c);
	return (0);
}
*/
