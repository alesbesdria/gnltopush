/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 14:42:57 by mmeirsma          #+#    #+#             */
/*   Updated: 2016/04/19 14:46:41 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "./libft/includes/libft.h"

# define BUFF_SIZE 1

typedef struct		TElement
{
	char			buff[BUFF_SIZE];
	long long		FilePosition;
	long long		FileNbCharRead;
	int				fd;
	struct TElement	*next;
}					Elem;

int					get_next_line(int const fd, char **line);

#endif
