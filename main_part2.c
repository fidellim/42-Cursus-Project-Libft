/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:18:35 by flim              #+#    #+#             */
/*   Updated: 2022/01/16 15:29:41 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	*trim = "lorem ipsum dolor sit amet";
	FILE	*fileptr;
	char	txtfile[150];	
	//fileno will convert FILE pointer to file descriptor

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
	printf("--------------------------\n");
	printf("4) ft_split\n");
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("5) ft_itoa\n");
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("6) ft_strmapi\n");
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("7) ft_striteri\n");
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("8) ft_putchar_fd\n");
	printf("File Name: %s\n", "test.txt");
	printf("Content/s of %s\n", "test.txt");
	fileptr = fopen("./testfile/test.txt", "w");
	if (fileptr)
	{
		ft_putchar_fd('a', fileno(fileptr));
		fclose(fileptr);
	}
	fileptr = fopen("./testfile/test.txt", "r");
	if (fileptr)
	{
		while (!feof(fileptr))
		{
			fgets(txtfile, 150, fileptr);
			puts(txtfile);
		}
		fclose(fileptr);
	}
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("9) ft_putstr_fd\n");
	printf("File Name: %s\n", "test2.txt");
	printf("Content/s of %s\n", "test2.txt");
	fileptr = fopen("./testfile/test2.txt", "w");
	if (fileptr)
	{
		ft_putstr_fd("..this is fidel.", fileno(fileptr));
		ft_putstr_fd("this is the continuation...", fileno(fileptr));
		fclose(fileptr);
	}
	fileptr = fopen("./testfile/test2.txt", "r");
	if (fileptr)
	{
		while (!feof(fileptr))
		{
			fgets(txtfile, 150, fileptr);
			puts(txtfile);
		}
		fclose(fileptr);
	}
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("10) ft_putendl_fd\n");
	printf("File Name: %s\n", "test3.txt");
	printf("Content/s of %s\n", "test3.txt");
	fileptr = fopen("./testfile/test3.txt", "w");
	if (fileptr)
	{
		ft_putendl_fd("this is fidel", fileno(fileptr));
		fclose(fileptr);
	}
	fileptr = fopen("./testfile/test3.txt", "w");
	if (fileptr)
	{
		ft_putendl_fd("this is test3...", fileno(fileptr));
		ft_putendl_fd("secondline", fileno(fileptr));
		ft_putendl_fd("this is test3 thirdline...", fileno(fileptr));
		fclose(fileptr);
	}
	fileptr = fopen("./testfile/test3.txt", "r");
	if (fileptr)
	{
		while (!feof(fileptr))
		{
			if (fgets(txtfile, 150, fileptr))
				printf("%s", txtfile);
		}
		fclose(fileptr);
	}
	printf("--------------------------\n");
	printf("--------------------------\n");
	printf("11) ft_putnbr_fd\n");
	printf("File Name: %s\n", "test4.txt");
	printf("Content/s of %s\n", "test4.txt");
	fileptr = fopen("./testfile/test4.txt", "w");
	if (fileptr)
	{
		ft_putnbr_fd(42, fileno(fileptr));
		fclose(fileptr);
	}
	fileptr = fopen("./testfile/test4.txt", "r");
	if (fileptr)
	{
		while (!feof(fileptr))
		{
			fgets(txtfile, 150, fileptr);
			puts(txtfile);
		}
		fclose(fileptr);
	}
	printf("--------------------------\n");
	return (0);
}
