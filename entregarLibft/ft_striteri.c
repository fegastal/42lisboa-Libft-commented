/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:42:56 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 17:32:19 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// O segundo parametro, novamente, eh uma funcao com
// dois parametros.

// A variavel 's' eh referente a string que quero iterar
// e f seria a funcao a ser aplicada a cada caractere.

#include "libft.h"

char	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
	return (0);
}
