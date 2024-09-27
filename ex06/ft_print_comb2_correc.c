/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_correc.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 03:01:33 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/27 03:20:47 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb2(int first, int second)
{
	ft_putchar(first / 10 + '0');
	ft_putchar(first % 10 + '0');
	ft_putchar(' ');
	ft_putchar(second / 10 + '0');
	ft_putchar(second % 10 + '0');
	if (first < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_put_comb2(first, second);
			second++;
		}
		first++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
