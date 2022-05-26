/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phongpai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:39:23 by phongpai          #+#    #+#             */
/*   Updated: 2022/05/26 23:50:03 by phongpai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
typedef struct s_store
{
	va_list	input;
	int		len_con;
}	t_store;
void	print_out(t_store *list, char mode);
void	print_u(t_store *list);
void	print_di(t_store *list);
void	print_s(t_store *list, int i);
void	print_c(t_store *list);
void	print_xl(t_store *list);
void	print_xs(t_store *list);
void	print_p(t_store *list);
char	*ft_unitoa(unsigned int n);
char	*make_16(unsigned int n, char mode);
char	*make_16p(size_t n, char mode);
void	print_perc(t_store *list);

#endif