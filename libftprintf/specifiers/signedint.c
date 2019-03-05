/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signedint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/27 18:19:35 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "prs_struct.h"

void	signedint(int n)
{
	int				i;
	unsigned int	cp;

	cp = n < 0 ? n * -1 : n;
	i = (n <= 0 ? 1 : 0);
	while (cp > 0)
	{
		cp = (cp - cp % 10) / 10;
		++i;
	}
	if (n <= 0)
		*g_ret.ret = n == 0 ? '0' : '-';
	cp = n < 0 ? n * -1 : n;
	while (cp)
	{
		g_ret.ret[--i] = (cp % 10) ^ 0x30;
		cp = (cp - cp % 10) / 10;
	}
}