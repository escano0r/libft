/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:10:54 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/04 20:48:49 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	if (d <= 57 && d >= 48)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isdigit('-'));
}*/