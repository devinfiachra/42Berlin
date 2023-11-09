/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:44:27 by dduffy-m          #+#    #+#             */
/*   Updated: 2023/11/09 15:02:22 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
