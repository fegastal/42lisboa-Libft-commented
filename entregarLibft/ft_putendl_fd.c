/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:27:23 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 18:47:36 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta função escreve as cadeias de caracteres para o descritor */
/* de ficheiro 'fd' seguido de um '\n' para fazer uma nova linha. */
/* Esta função é exatamente a mesma que a ft_putendl, */
/* exceto que tomamos um parâmetro para o descritor de ficheiro. */
/* Nós iremos utilizar as nossas funções ft_putstr_fd e ft_putchar_fd */
/* para fazer esta função funcionar. */
/* Necessario rever ft_putstr_fd e ft_putchar_fd para compreender o */
/* funcionamento desta função. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
