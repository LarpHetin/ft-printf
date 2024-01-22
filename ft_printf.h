/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylebit <ylebit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:57:34 by ylebit            #+#    #+#             */
/*   Updated: 2023/11/09 17:01:03 by ylebit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putstr(char *s, int *result);
void	ft_putnbr(int n, int *result);
void	ft_putchar(char c, int *result);
void	ft_dhex(unsigned int i, int *result);
void	ft_uhex(unsigned int i, int *result);
void	ft_unsigned(unsigned int i, int *result);
void	ft_pointer(unsigned long long i, int *result);
void	ft_check(va_list *list, char a, int *result);
int		ft_printf(const char *s, ...);

#endif