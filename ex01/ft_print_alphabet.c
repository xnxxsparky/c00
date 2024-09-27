/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:36:30 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/27 01:42:33 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	car;

	car = 'a';
	while (car <= 'z')
	{
		write(1, &car, 1);
		car++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
