/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduffy-m <dduffy-m@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:53:36 by dduffy-m          #+#    #+#             */
/*   Updated: 2023/11/08 16:55:18 by dduffy-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n > -1)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
