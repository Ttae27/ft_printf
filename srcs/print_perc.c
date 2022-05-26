/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_perc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:25:39 by phongpai          #+#    #+#             */
/*   Updated: 2022/05/26 23:57:42 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

void	print_perc(t_store *list)
{
	char	per;

	per = '%';
	write(1, &per, 1);
	list->len_con += 1;
}
