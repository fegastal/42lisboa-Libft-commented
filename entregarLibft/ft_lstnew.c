/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:48:23 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 16:40:23 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Estaremos alocando memória e retornando uma lista "fresh" ligada.
// O conteúdo dos elementos e o tamanho do conteudo dentro de nosso novo link
// serão copiados dos parâmetros da função. Se a alocação 
// de memória falhar então retornaremos NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
