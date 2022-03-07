/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:24:55 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 19:30:31 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Verifica se um caractere e imprimivel ou nao;
// Os caracteres que ocupam um espaco de impressao
// sao conhecidos como caracteres
// imprimiveis, que sao o oposto dos caracteres de controle,
// que podem ser verificados usando iscntrl();
// Prototipo: int	isprint(int arg);
// Recebe um unico argumento na forma de um inteiro
// Retorna um valor do tipo int, mesmo que isprint()
// receba um inteiro como argumento,
// O caractere e passado para a funcao;
// Internamente, o caractere e convertido em seu valor ASCII para a verificacao;
// Se for imprimivel, retorna um inteiro diferente de zero. Senao, retorna 0;

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}
