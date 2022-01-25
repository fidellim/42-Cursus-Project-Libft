/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:45:00 by flim              #+#    #+#             */
/*   Updated: 2022/01/25 20:43:13 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_del(void *content)
{
	free(content);
}

void	node_upper(void *content)
{
	char *str;

	str = content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

void	*node_upper_2(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str = content;
	while (*str)
	{
		*str = ft_toupper(*str);
		i++;
		str++;
	}
	return ((void *)str - i);
}

int	main(void)
{
	printf("--------------------------\n");
	printf("1) ft_lstnew\n");
	t_list	*t_one;
	t_one = ft_lstnew("first list");
	printf("Content: %s\n", (char *)t_one->content);
	free(t_one);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("2) ft_lstadd_front\n");
	t_list	*t_two, *t_two_2, *t_two_3, *t_two_4, **t_ptr;
	t_two = ft_lstnew("first node");
	t_two_2 = ft_lstnew("second node");
	t_two_3 = ft_lstnew("third node");
	t_two->next = t_two_2;
	t_two->next->next = t_two_3;
	while (t_two)
	{
		printf("Content %s\n", (char *)t_two->content);
		t_two = t_two->next;
	}
	free(t_two);
	free(t_two_2);
	free(t_two_3);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("3) ft_lstsize\n");
	t_two = ft_lstnew("first node");
	t_two_2 = ft_lstnew("second node");
	t_two_3 = ft_lstnew("third node");
	t_two->next = t_two_2;
	t_two->next->next = t_two_3;
	printf("Size of linked list: %d node/s\n", ft_lstsize(t_two));
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("4) ft_lstlast\n");
	printf("Last node's content of linked list: %s\n", (char *)ft_lstlast(t_two)->content);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("5) ft_lstadd_back\n");
	t_ptr = &t_two;
	t_two_4 = ft_lstnew("fourth node");
	ft_lstadd_back(t_ptr, t_two_4);
	while (t_two)
	{
		printf("Content %s\n", (char *)t_two->content);
		t_two = t_two->next;
	}
	free(t_two);
	free(t_two_2);
	free(t_two_3);
	free(t_two_4);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("6) ft_lstdelone\n");
	printf("Delete 3nd node's content\n");
	t_list	*t_3, *t_3_2, *t_3_3;
	t_3 = ft_lstnew(ft_strdup("first node"));
	t_3_2 = ft_lstnew(ft_strdup("second node"));
	t_3_3 = ft_lstnew(ft_strdup("third node"));
	t_3->next = t_3_2;
	t_3_2->next = t_3_3;
	ft_lstdelone(t_3, &ft_del);
	while (t_3)
	{
		if (t_3->content)
			printf("Content: %s\n", (char *)t_3->content);
		t_3 = t_3->next;
	}
	free(t_3);
	free(t_3_2);
	free(t_3_2->content);
	free(t_3_3);
	free(t_3_3->content);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("7) ft_lstclear\n");
	printf("Delete 2rd and its succeeding nodes\n");
	t_list	*t_4, *t_4_2, *t_4_3, **t_ptr_4;
	t_4 = ft_lstnew(ft_strdup("first node"));
	t_4_2 = ft_lstnew(ft_strdup("second node"));
	t_4_3 = ft_lstnew(ft_strdup("third node"));
	t_4->next = t_4_2;
	t_4_2->next = t_4_3;
	t_ptr_4 = &t_4_2;
	ft_lstclear(t_ptr_4, &ft_del);
	while (t_4)
	{
		if (t_4->content)
		{
			printf("Content: %s\n", (char *)t_4->content);
		}
		break ;
	}
	free(t_4);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("8) ft_lstiter\n");
	printf("Use toUpper on all node's content\n");
	t_4 = ft_lstnew(ft_strdup("first node"));
	t_4_2 = ft_lstnew(ft_strdup("second node"));
	t_4_3 = ft_lstnew(ft_strdup("third node"));
	t_4->next = t_4_2;
	t_4_2->next = t_4_3;
	printf("BEFORE---\n");
	printf("first node\n");
	printf("second node\n");
	printf("third node\n");
	printf("AFTER---\n");
	ft_lstiter(t_4, node_upper);
	while (t_4)
	{
		if (t_4->content)
		{
			printf("Content: %s\n", (char *)t_4->content);
		}
		t_4 = t_4->next;
	}
	free(t_4);
	free(t_4_2);
	free(t_4_3);
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("9) ft_lstmap\n");
	printf("Use toUpper on all new list node's content\n");
	t_list	*t_5;
	t_4 = ft_lstnew(ft_strdup("first node"));
	t_4_2 = ft_lstnew(ft_strdup("second node"));
	t_4_3 = ft_lstnew(ft_strdup("third node"));
	t_4->next = t_4_2;
	t_4_2->next = t_4_3;
	printf("BEFORE---\n");
	printf("first node\n");
	printf("second node\n");
	printf("third node\n");
	printf("AFTER---\n");
	t_5 = ft_lstmap(t_4, node_upper_2, ft_del);
	while (t_5)
	{
		if (t_5->content)
		{
			printf("Content: %s\n", (char *)t_5->content);
		}
		t_5 = t_5->next;
	}
	free(t_4);
	free(t_4_2);
	free(t_4_3);
	free(t_5);
	printf("--------------------------\n");
	return (0);
}
