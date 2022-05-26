/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:32:20 by phongpai          #+#    #+#             */
/*   Updated: 2022/05/26 23:58:17 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

void	print_xl(t_store *list)
{
	int				i;
	unsigned int	len;
	char			*tmp;

	len = va_arg(list->input, unsigned int);
	tmp = make_16(len, 'X');
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

void	print_xs(t_store *list)
{
	int				i;
	unsigned int	len;
	char			*tmp;

	len = va_arg(list->input, unsigned int);
	tmp = make_16(len, 'x');
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

char	*do_nil(char *tmp)
{
	tmp = ft_calloc(6, sizeof(char));
	tmp[0] = '(';
	tmp[1] = 'n';
	tmp[2] = 'i';
	tmp[3] = 'l';
	tmp[4] = ')';
	return (tmp);
}

void	print_p(t_store *list)
{
	int		i;
	size_t	len;
	char	*tmp;

	len = va_arg(list->input, size_t);
	i = 0;
	if (len == 0)
		tmp = do_nil(tmp);
	else
	{
		tmp = make_16p(len, 'x');
		len = 2;
		write(1, "0", 1);
		write(1, "x", 1);
	}
	while (tmp[i] != '\0')
	{
		len += write(1, &tmp[i], 1);
		i++;
	}
	list->len_con += len;
	free(tmp);
}
