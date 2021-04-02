/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:44:22 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/02 21:04:49 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_increment(char *first, char *second)
{
	if (*second == 99)
	{
		(*first)++;
		*second = *first + 1;
	}
	else
	{
		(*second)++;
	}
}

void	ft_print_comb2(void)
{
	char first;
	char second;

	first = 0;
	second = 1;
	while (first < 99 && second < 100)
	{
		ft_putchar(first / 10 + '0');
		ft_putchar(first % 10 + '0');
		ft_putchar(' ');
		ft_putchar(second / 10 + '0');
		ft_putchar(second % 10 + '0');
		if ((first / 10 != 9) || (first % 10 != 8))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_increment(&first, &second);
	}
}
