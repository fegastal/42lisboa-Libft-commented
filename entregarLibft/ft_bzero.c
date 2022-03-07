/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:59:57 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 21:16:33 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Mais uma funcao de preenchimento de memoria.
// Basicamente, faz o mesmo que a ft_memset,
// mas especificamente aloca n bytes de valor zero na area apontada por 's'.
// Nao retorna nada.

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}
