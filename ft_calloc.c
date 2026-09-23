/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanch3 <alsanch3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:15:10 by alsanch3          #+#    #+#             */
/*   Updated: 2026/09/23 14:19:28 by alsanch3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (count * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *) ptr);
}
