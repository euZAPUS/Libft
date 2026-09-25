/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanch3 <alsanch3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:09:31 by alsanch3          #+#    #+#             */
/*   Updated: 2026/09/25 14:09:32 by alsanch3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Tu invento de la caja (el struct)
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Aquí pegaremos más adelante los prototipos de tus 34 funciones obligatorias
// (ej: char *ft_itoa(int n); etc...)

// Prototipo de la función que vas a crear ahora
t_list	*ft_lstnew(void *content);

#endif
