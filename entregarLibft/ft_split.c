/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:46 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/07 17:04:42 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// GERAL 

// Esta função irá atribuir memória e devolver uma
// tabela 'fresh' de strings (todas terminada por um '\0')
// como resultado da divisão da cadeia dada
// pelo caractere dado 'c'.

// Se a alocação de memória falhar em
// qualquer ponto, a função retornará NULL.

// Um exemplo desta função é ft_split("*hello*fellow***students*", '*').
// Isto deve devolver uma tabela
// que divide a string int ["hello", "fellow", "students"].

// PARTE 01: count_words

// A primeira função que temos é uma função de contagem de palavras. 
// Fazemos isso porque teremos de descobrir quantas strings iremos
// colocar na nossa tabela, que deve ser devolvida a partir
// da função ft_split. 

// Queremos isto para quando alocamos memória para a tabela.

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count_words;
	int	find;

	count_words = 0;
	find = 0;
	while (*str)
	{
		if (*str != c && find == 0)
		{
			find = 1;
			count_words++;
		}
		else if (*str == c)
			find = 0;
		str++;
	}
	return (count_words);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**splitter_frame(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		startword;

	i = 0;
	j = 0;
	startword = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && startword < 0)
			startword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && startword >= 0)
		{
			split[j++] = word_dup(s, startword, i);
			startword = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	return (splitter_frame(split, s, c));
}
