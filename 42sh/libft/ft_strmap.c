/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcapocci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:57:21 by fcapocci          #+#    #+#             */
/*   Updated: 2017/01/27 21:57:22 by fcapocci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if ((new = (char*)malloc(sizeof(*new) * ft_strlen(s) + 1)) != NULL)
	{
		i = 0;
		while (*s != '\0')
			new[i++] = f(*s++);
		new[i] = '\0';
	}
	return (new);
}
