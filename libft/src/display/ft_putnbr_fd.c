/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 14:10:19 by mmeirsma          #+#    #+#             */
/*   Updated: 2016/04/12 14:10:23 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		s;

	s = 1;
	if (n < 0)
	{
		s = -1;
		ft_putchar_fd('-', fd);
	}
	if (n < -9 || n > 9)
		ft_putnbr_fd((n / 10) * s, fd);
	ft_putchar_fd(n % 10 * s + '0', fd);
	s = 1;
}
