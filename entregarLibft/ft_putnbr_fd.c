/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:24:21 by fgastal-          #+#    #+#             */
/*   Updated: 2022/02/28 17:23:13 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Esta funcao eh exatamente igual a nossa funcao ft_putnbr, exceto que nos */
/* estaremos usando a nossa ft_putchar_fd em vez de ft_putchar, porque */
/* estaremos aceitando um parametro para esta funcao. */
/* Recomendo aprender como a ft_putnbr e ft_putchar_fd funcionam */
/* internamente para entender.  file descriptor = numero */
/* que identifica exclusivamente um arquivo aberto no sist operacional */
/* de um computador. descreve um recurso de dados */
/* e como ele pode ser acessado. */
/* O descriptor eh um numero inteiro nao negativo exclusivo. */

/*
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_putnbr(int nb);
int	main(void)
{
	ft_putnbr(153);
	return (0);
} */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
