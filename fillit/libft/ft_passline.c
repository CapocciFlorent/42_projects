/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_passline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:16:01 by vcastro-          #+#    #+#             */
/*   Updated: 2015/12/11 10:16:02 by vcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_passline(char *file)
{
	while (*file != '\n' && *file != '\0')
		file++;
	if (*file == '\n')
		file++;
	return (file);
}
