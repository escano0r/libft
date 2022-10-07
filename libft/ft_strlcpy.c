/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:46:51 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/04 21:40:59 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlcpy() and strlcat() functions return 
//the total length of the string they tried to create.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
int main()
{
	char s[50] = "coucou";
	char d[50] = "A";

	size_t n = 0;
printf("%lu\n", strlcpy(d, s, n));
	printf("%lu\n", ft_strlcpy(d, s, n));

}*/
