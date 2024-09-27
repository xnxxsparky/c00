/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:48:38 by bcausseq          #+#    #+#             */
/*   Updated: 2024/09/27 01:52:13 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void)
{
	char	nb;

	nb = '0';
	while (nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}

int	main(void)
{
	ft_print_number();
	return (0);
}
