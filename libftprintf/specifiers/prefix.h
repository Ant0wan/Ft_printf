/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/04 15:00:54 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

typedef struct	s_prefi
{
	unsigned char	base:4;
	unsigned char	size:4;
	char			*prefix;
	char			*ch_base;
}				t_prefix;

extern t_prefix	g_prefix;

#endif
