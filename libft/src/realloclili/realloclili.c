/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jpm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 14:27:04 by mmeirsma          #+#    #+#             */
/*   Updated: 2016/04/12 14:27:12 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

List	*initialisation()
{
	List *List = malloc(sizeof(List));
	if (List == NULL/* | element == NULL*/)
	{
		return(NULL);
	}
	List->first = NULL;
	return List;
}

void	realloc_str(char ** Source, long long len, long long lenmore)
{
void	*temp;

	temp = *Source;
	*Source = malloc(len + lenmore + 1);
 	ft_memset(*Source, '\0', len + lenmore + 1);
	ft_strncpy(*Source, temp, len);
 	free(temp);
}

