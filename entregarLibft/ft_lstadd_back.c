/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:08:30 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/05 22:59:01 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adiciona um 'node' new no fim da lista;
// Nao retorna nem usa funcoes como externas;
// Tem como parametros o lst (pointer pro primeiro link da lista)
// E tambem o new, que eh um endereco do pointer pro no a ser adiconado na lista
// Precisa criar um endereco auxiliar (aux)

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
