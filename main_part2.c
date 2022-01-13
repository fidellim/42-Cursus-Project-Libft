/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:18:35 by flim              #+#    #+#             */
/*   Updated: 2022/01/13 22:55:55 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *trim = "lorem ipsum dolor sit amet";

	printf("--------------------------\n");
	printf("1) ft_substr\n");
	printf("---STRING: %s\n", trim);
	printf("Start: %d || Len: %d || Substr: %s\n", 0, 5, ft_substr(trim, 0, 5));
	printf("Start: %d || Len: %d || Substr: %s\n", 0, 1, ft_substr(trim, 0, 1));
	printf("Start: %d || Len: %d || Substr: %s\n", 0, 0, ft_substr(trim, 0, 0));
	printf("Start: %d || Len: %d || Substr: %s\n", 40, 5, ft_substr(trim, 40, 5));
	printf("Start: %d || Len: %d || Substr: %s\n", 1, 2, ft_substr(trim, 1, 2));
	printf("Start: %d || Len: %d || Substr: %s\n", 1, 0, ft_substr(trim, 1, 0));
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("2) ft_strjoin\n");
	printf("---STRING: %s\n", trim);
	printf("S1: %s || S2: %s || NEW: %s\n", trim, "hi", ft_strjoin(trim, "hi"));
	printf("S1: %s || S2: %s || NEW: %s\n", trim, "", ft_strjoin(trim, ""));
	printf("S1: %s || S2: %s || NEW: %s\n", "", "hi", ft_strjoin("", "hi"));
	printf("S1: %s || S2: %s || NEW: %s\n", "", "", ft_strjoin("", ""));
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("3) ft_strtrim\n");
	printf("---STRING: %s\n", trim);
	printf("Set: amet || Trimmed: %s\n", ft_strtrim(trim, "amet"));
	printf("Set: ipsum  || Trimmed: %s\n", ft_strtrim(trim, "ipsum"));
	printf("Set: z || Trimmed: %s\n", ft_strtrim(trim, "z"));
	printf("Set: lorem || Trimmed: %s\n", ft_strtrim(trim, "lorem"));
	printf("Set: tel || Trimmed: %s\n", ft_strtrim(trim, "tel"));
	printf("--------------------------\n");
	return (0);
}

