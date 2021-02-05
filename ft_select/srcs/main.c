/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcapocci <fcapocci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 13:43:06 by fcapocci          #+#    #+#             */
/*   Updated: 2016/07/05 18:59:33 by fcapocci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_select.h"

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (ft_select(argc, argv) == ERR)
			return (ERR);
	}
	else
		ft_putendl("Not argument for ft_select");
	return (0);
}
