/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:55:22 by flim              #+#    #+#             */
/*   Updated: 2022/01/21 19:12:05 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!ft_isascii(c))
		return ((char *)s);
	while (*s && *s != c)
		s++;
	if (*s == c || !ft_isascii(c))
		return ((char *)s);
	return (0);
}
