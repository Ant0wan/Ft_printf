/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/11 15:39:16 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include "ft_printf.h"
#include "prs_struct.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>


// make test && gcc -fsanitize=address -Wall -Wextra -Werror main.c libftprintf.a -I./libftprintf/dispatcher/ -I./libftprintf && ./a.out

//void	*malloc(size_t s)
//{
//	static int i;
//	void *ptr;
//
//	++i;
//	if (i % 2)
//	{
//		ptr = valloc(s);
//		return (ptr);
//
//	}
//	else
//		return NULL;
//}


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
//	int o;
//	int k;

//	printf("\n____ PADDING TEST ____\n");
//	printf(" LENGTH va_list: %lu\n", sizeof(va_list));
//	printf(" LENGTH t_ret: %lu\n", sizeof(t_ret));
//	printf(" LENGTH t_modifier: %lu\n", sizeof(t_modifier));
//	printf(" LENGTH t_flags: %lu\n", sizeof(t_flags));
//	printf(" LENGTH t_options: %lu\n", sizeof(t_options));
//	printf(" LENGTH sizeof unsigned char: %lu\n", sizeof(unsigned char));
//	printf(" LENGTH sizeof short: %lu\n", sizeof(short));
//	printf(" LENGTH sizeof int: %lu\n", sizeof(int));
//	printf(" LENGTH sizeof size_t: %lu\n", sizeof(size_t));
//	printf(" LENGTH sizeof intmax_t: %lu\n", sizeof(intmax_t));
//	printf(" LENGTH sizeof long long: %lu\n", sizeof(long long));
//	printf("‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n\n");


	

	int ret1;
	int ret2;

	ret1 = printf("%C\n", L'😄');
	printf("%d\n", ret1);
	ret2 = ft_printf("%C\n", L'😄');
	printf("%d\n", ret2);

	ret1 = printf("%C\n", L'😄');
	printf("%d\n", ret1);
	printf("\n\n");
	ret2 = ft_printf("%C\n", L'😄');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%");
	printf("%d\n", ret1);
	ret2 = printf("%");
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("%   %");
	printf("%d\n", ret1);
	ret2 = ft_printf("%   %");
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("1Hello %C!", L'~');
	printf("%d\n", ret1);
	ret2 = printf("1Hello %C!", L'~'); // 256
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("Hello %C!%s", L'\x160', "BOY");
	printf("%d\n", ret1);
	ret2 = printf("Hello %C!%s", L'\x160', "BOY"); // 256
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("2Hellowidth %-12lc!%s%s", L'\x0FF', "Damn", "okay"); // 255
	printf("%d\n", ret1);
	ret2 = printf("2Hellowidth %-12lc!%s%s", L'\x0FF', "Damn", "okay");
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("Hello %lc!%s%s", L'\x100', "Damn", "okay");
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %lc!%s%s", L'\x100', "Damn", "okay");
	printf("%d\n", ret2);
	printf("\n\n");

  

	printf("\n\n");
	ret1 = printf("Hello %.2c!", 'W');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %.2c!", 'W');
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("Hello %20c!", -8000);
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %20c!", -8000);
	printf("%d\n", ret2);
	printf("\n\n");


	ret1 = printf("Hello %-20c!", 'w');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %-20c!", 'w');
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("Hello %.12c!", 'a');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %.12c!", 'a');
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("Hello %.2c!", 'q');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %.2c!", 'q');
	printf("%d\n", ret2);
	printf("\n\n");


	
//	ret1 = printf("%2147483649d|", 1234);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%2147483649d|", 1234);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf(" %2147483647d", 12);
//	printf("%d\n", ret1);
//	ret2 = ft_printf(" %2147483647d", 12);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ft_printf("%0y");
	ret1 = printf("Hello %10.10lca%.2lc", L'电', L'😢 ');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %10.10lca%.2lc", L'电', L'😢 ');
	printf("%d\n", ret2);
	printf("\n\n");

//	ft_printf("%y");
	ret1 = printf("%1.5C", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%1.5C", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%5.5lc", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%5.5lc", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%1.3lc", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%1.3lc", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%1.4lc", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%1.4lc", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%5.6C", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%5.6C", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%7.6C", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%7.6C", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%lc", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%lc", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%10.10C!", L'脑');
	printf("%d\n", ret1);
	ret2 = ft_printf("%10.10C!", L'脑');
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("Hello %10.10C!%.1C%C", L'电', L',', L'坏');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %10.10C!%.1C%C", L'电', L',', L'坏');
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("Hello %9.9lc!%.1lc%lc", L'电', L',', L'坏');
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %9.9lc!%.1lc%lc", L'电', L',', L'坏');
	printf("%d\n", ret2);
	printf("\n\n");


	ret1 = printf("%100lc", L'😢 ');
	printf("%d\n", ret1);
	ret2 = ft_printf("%100lc", L'😢 ');
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("%100lc", L'Ƒ');
	printf("%d\n", ret1);
	ret2 = ft_printf("%100lc", L'Ƒ');
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("%-10.2lc%lc%lc", L'电', L',', L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("%-10.2lc%lc%lc", L'电', L',', L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("%10.2C%C%C", L'电', L',', L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("%10.2C%C%C", L'电', L',', L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("a|%-10.2C|", L'O');
	printf("%i\n", ret1);
	ret2 = ft_printf("a|%-10.2C|", L'O');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("p0 |%-10.0C|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("p0 |%-10.0C|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("p |%-10.lc|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("p |%-10.lc|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("10.2|%10.2C|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("10.2|%10.2C|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("a|%2.20lc|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("a|%2.20lc|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("a|%-10.2C|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("a|%-10.2C|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("a|%-2.20lc|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("a|%-2.20lc|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("q|%2.2lc|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("q|%2.2lc|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");

	ret1 = printf("q|%20.6C|", L'坏');
	printf("%i\n", ret1);
	ret2 = ft_printf("q|%20.6C|", L'坏');
	printf("%i\n", ret2);
	printf("\n\n");
////
//	ret1 = printf("\e[96m");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("\e[96m");
//	printf("%i\n", ret2);
//	printf("\n\n");
	return (0);
}
