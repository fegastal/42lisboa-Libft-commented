/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:54:12 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 16:39:59 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adiciona o no 'new' no comeco da lista;
// tem como parametro 'lst' e 'new';
// 'lst' e o endereco do pointer do primeiro link da lista;
// 'new' e o endereco do pointer do node a ser adicionado na lista;
// Nao retorna nada e nao tem nada como funcao externa.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}
