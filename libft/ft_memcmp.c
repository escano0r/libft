/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:57:55 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/09 13:58:17 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*cnv_s1;
	char	*cnv_s2;

	i = 0;
	cnv_s1 = (char *)s1;
	cnv_s2 = (char *)s2;
	while (i < n)
	{
		if (cnv_s1[i] != cnv_s2[i])
			return ((unsigned char)cnv_s1[i] - (unsigned char)cnv_s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[10] = "aaab";
	char s2[10] = "aaac";

	printf("%d\n", ft_memcmp(s1, s2, 1));
	//printf("%d\n", memcmp(s1, s2, 1);
}*/