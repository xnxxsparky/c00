/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 02:16:48 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/27 02:55:08 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_comb2(char i, char j, char k, char l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if ((i < '9') || (j < '8'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	j = '0';
	k = '0';
	l = '1';
	while (i <= '9' || (j <= '8'))
	{
		while (k <= '9' && (l <= '9'))
		{
			ft_put_comb2(i, j, k, l);
			if (l == '9')
			{
				l = '0';
				k++;
			}
			else
				l++;
		}
		j++;
		if (j > '9')
		{
			j = '0';
			i++;
		}
		k = i;
		l = j + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
