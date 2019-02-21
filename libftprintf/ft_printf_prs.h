/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:00:51 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 18:03:51 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PRS_H
# define FT_PRINTF_PRS_H

# include <stdarg.h>

int	printf_prs(char **ret, const char *format, va_list ap);

int	valist_cpy(va_list ap, va_list **array);

#endif
