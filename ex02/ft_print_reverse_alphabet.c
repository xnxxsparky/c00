/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:44:06 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/27 01:48:01 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	car;

	car = 'z';
	while (car >= 'a')
	{
		write(1, &car, 1);
		car--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
