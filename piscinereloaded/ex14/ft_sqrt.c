/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:05:43 by dduffy-m          #+#    #+#             */
/*   Updated: 2023/11/09 15:16:28 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while ((i < 46341) && (i * i <= nb))
	{
		if ((i * i) == (nb))
			return (i);
		i++;
	}
	return (0);
}
