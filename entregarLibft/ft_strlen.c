/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:29:27 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 20:55:36 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// O valor retornado e do tipo size_t (tipo int unsigned).

// O motivo de usar const char:

// char* é um ponteiro mutável para um caractere/string mutável;

// const char* é um ponteiro mutável para um caractere/string imutável
// e não pode apontar para nenhum outro local.

// Você não pode alterar o conteúdo dos
// locais para os quais este ponteiro aponta;

// usar o formato %zu especificamente para fazer print de um size_t.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",ft_strlen(a));
    printf("Length of string b = %zu \n",ft_strlen(b));

    return 0;
} */
