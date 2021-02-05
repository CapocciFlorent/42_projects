/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcapocci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 13:58:58 by fcapocci          #+#    #+#             */
/*   Updated: 2016/02/25 12:09:26 by fcapocci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	t_opt		*optl;

	optl = NULL;
	if ((take_option(&optl, &argc, &argv)) == -1)
		return (-1);
	if ((manage(argc, argv, optl)) == -1)
		return (-1);
	ft_memdel((void**)&optl);
	return (0);
}
