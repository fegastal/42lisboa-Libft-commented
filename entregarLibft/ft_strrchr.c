/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgastal- <fgastal-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:52:22 by fgastal-          #+#    #+#             */
/*   Updated: 2022/03/06 22:54:28 by fgastal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&((char *)str)[i]);
		i--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main ()	
{
   int len;
   const char str[] = "http://fernandagastal.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/
