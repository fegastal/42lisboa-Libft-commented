/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:45:49 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 12:12:14 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Alocacao contigua, usado para alocar dinamicamente
// o numero especificado de blocos de memoria de um tipo especificado.

// Semelhante ao malloc, mas tem dois pontos diferentes:

// Ele inicializa cada bloco com um valor padrao '0'
// ELe tem dois parametros de argumentos em comparacao com o malloc().

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', (size * count));
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int* ptr;
    int n, i;

    n = 5;
    printf("Digite o numero de elementos: %d\n", n);
    ptr = (int*)ft_calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memoria nao foi alocada.\n");
        exit(0);
    }
    else {
        printf("Memoria alocada com sucesso usando o calloc.\n");
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        printf("Os elementos do arrary sao: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;
}
*/