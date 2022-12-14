/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:15:42 by ogorfti           #+#    #+#             */
/*   Updated: 2022/10/17 14:34:42 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
int main()
{
	t_list *p;
	p = ft_lstnew("Gfx");
	printf("%s", (char *)p->next);	
}*/