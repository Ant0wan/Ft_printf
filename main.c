/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:35:29 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/25 18:05:14 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	short i;
	i = 100;
	printf("short: %hd\n", i);
	printf("wchar_t sizeof: %lu\n", sizeof(wchar_t));
	ft_printf("Hello World\n");
	return (0);
}