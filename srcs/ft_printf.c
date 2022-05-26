/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:39:05 by phongpai          #+#    #+#             */
/*   Updated: 2022/05/26 13:58:44 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	t_store	*list;

	list = malloc(sizeof(t_store));
	i = 0;
	len = 0;
	va_start(list->input, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			print_out(list, str[i + 1]);
			i += 2;
		}
		else
		{
			len += write(1, &str[i], 1);
			i++;
		}
	}
	va_end(list->input);
	len += list->len_con;
	free(list);
//	printf("len in ft_printf = %d\n",len);
	return (len);
}

void	print_out(t_store *list, char mode)
{
	if (mode == 'c')
		print_c(list);
	else if (mode == 's')
		print_s(list);
	else if (mode == 'd' || mode == 'i')
		print_di(list);
	else if (mode == 'u')
		print_u(list);
	else if (mode == 'p')
		print_p(list);
	else if (mode == 'x')
		print_xs(list);
	else if (mode == 'X')
		print_xl(list);
	else if (mode == '%')
		print_perc(list);
}
