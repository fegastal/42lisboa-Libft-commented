/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:22:42 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:11:42 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converte um argumento string str em inteiro int.

// Ex: em "12345", ela usa o primeiro caractere 1,
// depois multiplica por 10 e soma com o proximo caractere, dai vira 12.
// Multiplica-se por 10 e vira 120 + 3, dai vira 123.
// Multiplica por 10 soma com 4 = 1234 e assim por diante.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sinal;
	int	num;
	int	i;

	sinal = 1;
	num = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		num = (num * 10) + (str[i++] - 48);
	return (sinal * num);
}

/*
#include <stdio.h>
int main()
{
	char	*str;
	str = "          -2147483648ab567";
	printf("minha funcao = %d\n", ft_atoi(str));
	printf("funcao normal = %d\n", atoi(str));
}
*/