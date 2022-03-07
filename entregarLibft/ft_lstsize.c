/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:06:49 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/05 22:45:13 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Conta o numero de 'nodes' em uma lista
// Retorna o 'length' da lista
// lst: o comeco de uma lista.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
