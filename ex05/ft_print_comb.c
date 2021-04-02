/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dludtke- <dludtke-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:04:22 by dludtke-          #+#    #+#             */
/*   Updated: 2021/04/02 14:37:48 by dludtke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_line(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_increment(char *a, char *b, char *c)
{
	if (*b == '8')
	{
		(*a)++;
		*b = *a + 1;
		*c = *b + 1;
	}
	else
	{
		if (*c == '9')
		{
			(*b)++;
			*c = *b + 1;
		}
		else
		{
			(*c)++;
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' && b <= '8' && c <= '9')
	{
		ft_print_line(a, b, c);
		ft_increment(&a, &b, &c);
	}
}
