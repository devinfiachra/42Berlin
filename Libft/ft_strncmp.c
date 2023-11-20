/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:18:43 by dduffy-m          #+#    #+#             */
/*   Updated: 2023/11/20 17:36:43 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return ((int)((unsigned char)str1[i] - (unsigned char)str2[i]));
		}
		i++;
	}
	return (0);
}
