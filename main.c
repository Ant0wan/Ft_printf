/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/19 11:02:28 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>

int main(void)
{
	//	void	(*f)();

	setlocale(LC_ALL, "");
	//	f = dispatcher("o");
	//	printf("%d\n", (int)f);
	//	f = dispatcher("d");
	//	printf("%d\n", (int)f);
	//	if (f)
	//		f(2000);
	int o;

	//ft_printf("Hello World%d   k\n", -99420000000);
	ft_printf("Hello World%p   k\n", o);
	printf("\n\n");
	//printf("Hello World%d   k", -99420000000);
	printf("Hello World%p   k", o);
	printf("\n\n");
//	ft_printf("%C\n", L'😄');
//	printf("\nsize of%d\n", sizeof("😄")); // recoding with char classic one
//	printf("\n\n");
//	printf("%C\n", L'😄');
	printf("\n\n");
//	printf("4567 |%-10]5d| plip\n", 12);
//	printf("4567 |%10]5d| plip\n", 12);
//	printf("|%10.5d|\n", -12);
//	printf("|%10d|\n", -12);
//	printf("|%010d|\n", -12); 
//	printf("|%-10.5d|\n", -12);
//	printf("|%-010.5d|\n", -12);
	return (0);
}
