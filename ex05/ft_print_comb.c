/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:10:49 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 23:18:45 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	buf[5];

	buf[0] = '0' - 1;
	buf[3] = ',';
	buf[4] = ' ';
	while (++buf[0] <= '6')
	{
		buf[1] = buf[0];
		while (++buf[1] <= '8')
		{
			buf[2] = buf[1];
			while (++buf[2] <= '9')
			{
				write(1, buf, 5);
			}
		}
	}
	write(1, "789", 3);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/