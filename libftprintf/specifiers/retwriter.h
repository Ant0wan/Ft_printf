/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retwriter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:23:31 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 16:01:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RETWRITER_H
# define RETWRITER_H

# include <stdlib.h>

void	retwriter(char *str, int size) __attribute__
			((always_inline));

void	wretwriter(wchar_t *ws, int size) __attribute__
		((always_inline));

#endif
