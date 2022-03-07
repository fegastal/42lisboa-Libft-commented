/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:15:57 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 18:47:53 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta função é exatamente a mesma que a nossa função ft_putstr, */
/* excepto que requer um descritor de ficheiro no parâmetro. */
/* Como fazemos na nossa função ft_putchar_fd, utilizamos */
/* um descritor de ficheiro obtido do open system call, */
/* ou podemos usar 0, 1, ou 2, para se referir à entrada padrão, */
/* saída padrão, ou erro padrão. Nós utilizamos o parâmetro fd */
/* como o primeiro parâmetro na nossa função de escrita. Nós então */
/* colocamos a nossa string como próximo parâmetro de escrita. */
/* Por último, usamos ft_strlen na nossa string para sabermos */
/* quantos bytes terão de ser escritos, que é o mesmo que */
/* o comprimento da string dada. Escreverá então a string s para a */
/* saída desejada. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
