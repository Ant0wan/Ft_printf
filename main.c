/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:12:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 16:20:53 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <locale.h>
int main(void)
{
	int ret1;

	setlocale(LC_ALL, "en_GB");

	ret1 = printf("|%'40X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'40X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'040X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'040X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%' 040X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%' 040X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'.40X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'.40X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'0.40X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'0.40X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'40.20X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'40.20X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'040X|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'040X|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'5o|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'5o|", -123456789);
	printf("%d\n", ret1);
	printf("\n");
	ret1 = ft_printf("|%'40X|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'40X|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'040X|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'040X|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%' 040X|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%' 040X|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'.40X|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'40.20X|", 123456789);
	printf("%d\n", ret1);
	ret1 = ft_printf("|%'40.20X|", -123456789);
	printf("%d\n", ret1);
	ret1 = ft_printf("|%'.40X|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'0.40X|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'0.40X|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'040X|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'040X|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'5o|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'5o|", -123456789);
	ft_printf("%d\n", ret1);
	printf("\n");
	ret1 = printf("|%'-40d|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-40d|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-040d|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-040d|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'- 040d|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'- 040d|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-.40d|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-.40d|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-0.40d|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-0.40d|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-040d|", 123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-040d|", -123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-5d|", 1123456789);
	printf("%d\n", ret1);
	ret1 = printf("|%'-5d|", -1123456789);
	printf("%d\n", ret1);
	printf("\n");
	ret1 = ft_printf("|%'-40d|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-40d|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-040d|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-040d|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'- 040d|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'- 040d|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-.40d|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-.40d|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-0.40d|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-0.40d|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-040d|", 123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-040d|", -123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-5d|", 1123456789);
	ft_printf("%d\n", ret1);
	ret1 = ft_printf("|%'-5d|", -1123456789);
	ft_printf("%d\n", ret1);
	printf("\n");
	return (0);
}
