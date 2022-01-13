/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:52:48 by flim              #+#    #+#             */
/*   Updated: 2022/01/05 19:31:38 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int alnum)
{
	if ((alnum > 47 && alnum < 58) || (alnum > 64 && alnum < 91)
		|| (alnum > 96 && alnum < 123))
		return (1);
	return (0);
}