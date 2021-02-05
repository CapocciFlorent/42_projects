/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcapocci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:53:26 by fcapocci          #+#    #+#             */
/*   Updated: 2016/02/13 14:49:00 by fcapocci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

void	ft_putnbr(long long n)
{
	if (n == LLONG_MIN)
		ft_putstr("-9223372036854775807");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}