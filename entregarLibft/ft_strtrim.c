/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:38:47 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 13:19:34 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Atribui memória e devolve uma cópia da string passada no
// parâmetro, mas sem qualquer tipo de espaços em branco
// no início ou no final da string.

// Espaços em branco sao os caracteres ' ',
// '\n', '\t', que é um espaço de tabulação.

// Se não houver espaços no início e no fim da cadeia de parâmetros s,
// a função devolve uma cópia de s. Se a atribuição de memória falhar, a
// função retorna NULL.

// Usaremos as funcoes ft_strchr, ft_substr e ft_strlen para
// obter o que desejamos. 

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
