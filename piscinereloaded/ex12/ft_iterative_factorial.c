/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:38:07 by dduffy-m          #+#    #+#             */
/*   Updated: 2023/11/09 14:43:25 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 1)
		return (0);
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
