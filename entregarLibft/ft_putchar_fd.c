/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:24:57 by fgastal-          #+#    #+#             */
/*   Updated: 2022/02/28 17:19:59 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta função é exatamente igual a nossa função ft_putchar, exceto que ela
 * requer o descritor de arquivo de onde escrever a saída como um
 * parâmetro. Então, ao invés de escrever automaticamente na saída padrão, nós
 * escolhemos se queremos usar um descritor de arquivo obtido do open
 * system call, ou usamos 0, 1 ou 2, para nos referirmos à entrada padrão,
 * saida padrao ou erro padrao, respectivamente.
 
 * Usamos a função write como fizemos
 * na função ft_putchar, mas desta vez em vez de ter o primeiro
 * parametro de escrita seja um 1 para a saída padrão que tomamos ft_putchar's
 * int fd e utilizá-lo como o primeiro parâmetro para escrever.
 
 * Continuamos a utilizar o endereço do nosso char c para a
 * cadeia de caracteres terminada nula como o conteúdo
 * para escrever, e ainda sabemos que escreveremos apenas um personagem para
 * o nosso descritor de ficheiro desejado, pelo que utilizamos 1,
 * uma vez que iremos escrever 1 byte.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
