/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:12:52 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 19:44:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include "prs_struct.h"

extern t_options	g_options;

int main(void)
{
	long long k;
	int		nb;
	char	c;
	nb = 654654654;
	c = 'W';
	k = 545454564548665;
	ft_printf("%#4llb\n", k);
	printf("%#4llb\n", k);
	printf("%d\n", g_options.precision);
	printf("%d\n", g_options.width);
	ft_printf(">%25.0llX\n", LLONG_MAX);

	printf("%d\n", g_options.precision);
	printf("%d\n", g_options.width);
	printf(">%25.0llX\n", LLONG_MAX);
	ft_printf("%42llb\n", k);
	dprintf(2,"%42llb\n", k);
	ft_printf("%5hhb\n", c);
	dprintf(2,"%5hhb\n", c);
	ft_printf("%-15hhb\n", c);
	dprintf(2,"%-15hhb\n", c);
	ft_printf("%-5hhb\n", c);
	dprintf(2,"%-5hhb\n", c);
	ft_printf("%42hhb\n", c);
	dprintf(2,"%42hhb\n", c);
	ft_printf("%-18hhb\n", c);
	dprintf(2,"%-18hhb\n", c);
	ft_printf("%42hhb\n", c);
	dprintf(2,"%42hhb\n", c);

	return (0);
}
