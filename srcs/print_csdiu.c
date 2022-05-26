/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_csdiu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:14:49 by phongpai          #+#    #+#             */
/*   Updated: 2022/05/26 14:06:43 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

void	print_u(t_store *list)
{
	int				i;
	unsigned int	len;
	char			*tmp;

	len = va_arg(list->input, unsigned int);
	tmp = ft_unitoa(len);
	len = 0;
	i = 0;
	while (tmp[i] != '\0')
	{
		len += write(1, &tmp[i], 1);
		i++;
	}
	list->len_con += len;
	free(tmp);
}

void	print_di(t_store *list)
{
	int		i;
	int		len;
	int		tmp_len;
	char	*tmp;

	tmp_len = va_arg(list->input, int);
	tmp = ft_itoa(tmp_len);
	i = 0;
	len = 0;
	while (tmp[i] != '\0')
	{
		len += write(1, &tmp[i], 1);
		i++;
	}
	list->len_con += len;
	free(tmp);
}

void	print_s(t_store *list)
{
	int		i;
	int		len;
	char	*tmp;

	tmp = va_arg(list->input, char *);
	if (tmp == NULL)
	{
		tmp = ft_calloc(7, sizeof(char));
		//tmp = "(null)";
		tmp[0] = '(';
		tmp[1] = 'n';
		tmp[2] = 'u';
		tmp[3] = 'l';
		tmp[4] = 'l';
		tmp[5] = ')';
	}
	else
		tmp = ft_strdup(tmp);
	i = 0;
	while (tmp[i] != '\0')
	{
		len += write(1, &tmp[i], 1);
		i++;
	}
	list->len_con += len;
	free(tmp);
}

void	print_c(t_store *list)
{
	int		i;
	char	tmp;

	tmp = va_arg(list->input, int);
	i = write(1, &tmp, 1);
	list->len_con += i;
}