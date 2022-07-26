/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:19:51 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 23:19:55 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	update(char *buf, int a, int b)
{
	write(1, buf, 7);
	if (buf[b] == '9')
	{
		++buf[a];
		buf[b] = '0';
	}
	else
		++buf[b];
}

void	ft_print_comb2(void)
{
	char	buf[7];

	buf[0] = '0';
	buf[1] = '0';
	buf[2] = ' ';
	buf[5] = ',';
	buf[6] = ' ';
	while (buf[0] != '9' || buf[1] != '8')
	{
		buf[3] = buf[0];
		if (buf[1] == '9')
		{
			++buf[3];
			buf[4] = '0';
		}
		else
			buf[4] = buf[1] + 1;
		while (buf[3] != '9' || buf[4] != '9')
			update(buf, 3, 4);
		update(buf, 0, 1);
	}
	write(1, "98 99", 5);
}
