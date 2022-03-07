/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:07:04 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 17:53:57 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Esta função atribui memória e devolve uma sequência de caracteres
// que termina com um '\0' e que é o equivalente ao char da int passada no
// parâmetro.

// Os números negativos também devem ser geridos.

// Se a atribuição falha, a função retornará NULL.

// NOTA: Esta é uma função recursiva. Se não está familiarizado
// com funções recursivas, é uma função que chama a si mesma ou está
// num potencial ciclo de chamadas de funções.

#include "libft.h"
#include <stdio.h>

static int	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
	{
		n = -n;
		len = 1;
	}
	else
		len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_intlen(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	ptr[len] = '\0';
	while (n > 0)
	{
		ptr[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (ptr);
}

// int main(void)
// {
// 	long int	inteiro;

// 	inteiro = -2147483648;
// 	printf("Valor do inteiro = %s\n", ft_itoa(inteiro));
// }
